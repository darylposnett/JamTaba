#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainframe.h"
#include "BusyDialog.h"
#include "../ninjam/Server.h"
#include "../loginserver/LoginService.h"

class PluginScanDialog;
class NinjamRoomWindow;

namespace Controller{
    class MainController;
}
namespace Ui{
    class MainFrameClass;
    class MainFrame;
}

namespace Login {
    class LoginServiceParser;
    //class AbstractJamRoom;
}

namespace Audio {
class Plugin;
class PluginDescriptor;
}

namespace Plugin {
class PluginDescriptor;
}

class JamRoomViewPanel;
class PluginGui;
class LocalTrackGroupView;
class MetronomeTrackView;

class MainFrame : public QMainWindow
{
    Q_OBJECT

public:
    MainFrame(Controller::MainController* mainController, QWidget *parent=0);
    ~MainFrame();
    virtual void closeEvent(QCloseEvent *);
    virtual void showEvent(QShowEvent*);
    virtual void changeEvent(QEvent *);
    virtual void timerEvent(QTimerEvent *);
    virtual void resizeEvent(QResizeEvent*);
private slots:
    void on_tabCloseRequest(int index);
    void on_preferencesClicked();
    void on_IOPropertiesChanged(int midiDevice, int audioDevice, int firstIn, int lastIn, int firstOut, int lastOut, int sampleRate, int bufferSize);
    void on_roomsListAvailable(QList<Login::RoomInfo> publicRooms);

    //+++++  ROOM FEATURES ++++++++
    void on_startingRoomStream(Login::RoomInfo roomInfo);
    void on_stoppingRoomStream(Login::RoomInfo roomInfo);
    void on_enteringInRoom(Login::RoomInfo roomInfo);
    void on_enteredInRoom(Login::RoomInfo roomInfo);
    void on_exitedFromRoom(bool normalDisconnection);
    //

    //plugin finder
    void onPluginScanStarted();
    void onPluginScanFinished();
    void onPluginFounded(QString name, QString group, QString path);

    //input selection
    void on_inputSelectionChanged();

    //add/remove channels
    void on_toolButtonClicked();
    void on_addChannelClicked();
    void on_toolButtonMenuActionTriggered(QAction*);
    void on_toolButtonMenuActionHovered(QAction*);

private:

    BusyDialog busyDialog;

    void showBusyDialog(QString message);
    void showBusyDialog();
    void hideBusyDialog();
    void centerBusyDialog();

    int timerID;

    QMap<long long, JamRoomViewPanel*> roomViewPanels;

    Controller::MainController* mainController;
    PluginScanDialog* pluginScanDialog;
    Ui::MainFrameClass ui;
    QList<LocalTrackGroupView*> localChannels;
    MetronomeTrackView* metronomeTrackView;
    NinjamRoomWindow* ninjamWindow;
    //PluginGui* createPluginView(Plugin::PluginDescriptor *, Audio::Plugin *plugin) ;

    void showPluginGui(Audio::Plugin* plugin);

    static bool jamRoomLessThan(Login::RoomInfo r1, Login::RoomInfo r2);

    void initializeWindowState();
    void initializeLoginService();
    void initializeLocalTrackView();
    void initializeVstFinderStuff();
    void initializeMainControllerEvents();
    void initializeMainTabWidget();

    void addLocalChannel();
};







