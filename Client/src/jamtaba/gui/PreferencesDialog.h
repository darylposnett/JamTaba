#pragma once
#include <QDialog>
#include <QMap>
//#include <QCloseEvent>

namespace Audio {    class AudioDriver; }
namespace Ui    {    class IODialog; }
namespace Midi  {    class MidiDriver;  }
namespace Controller{class MainController; }

//++++++++++++++++++++++++++++++++++
class PreferencesDialog : public QDialog
{
    Q_OBJECT

public:
    PreferencesDialog(Controller::MainController* mainController, QWidget *parent = 0);
    ~PreferencesDialog();
    void selectAudioTab();
    void selectMidiTab();
    void selectVstPluginsTab();
    void selectRecordingTab();
private slots:
    void on_comboFirstInput_currentIndexChanged(int);
    void on_comboFirstOutput_currentIndexChanged(int);
    void on_comboAudioDevice_activated(int index);
    void on_okButton_released();

    void on_prefsTab_currentChanged(int index);

    void on_buttonAddVstPath_clicked();

    void on_buttonRemoveVstPathClicked();

    void on_buttonClearVstCache_clicked();

    void on_buttonScanVSTs_clicked();

    void on_browseRecPathButton_clicked();

    void on_recordingCheckBox_clicked();



signals:
    void ioPreferencesChanged(QList<bool> midiInputsStatus, int selectedAudioDevice, int firstIn, int lastIn, int firstOut, int lastOut, int sampleRate, int bufferSize);
private:
    Ui::IODialog *ui;
    Controller::MainController* mainController;

    //AUDIO
    void populateAsioDriverCombo();
    void populateFirstInputCombo();
    void populateLastInputCombo();
    void populateFirstOutputCombo();
    void populateLastOutputCombo();
    void populateSampleRateCombo();
    void populateBufferSizeCombo();
    void populateAudioTab();


    //MIDI
    void populateMidiTab();

    //VST
    void populateVstTab();
    void addVstScanPath(QString path);
    void createWidgetsToNewScanPath(QString path);
    void clearScanPathWidgets();
    QList<QPushButton*> scanPathButtons;
    //void removeVstScanPath(QString path);

    //QMap<int, bool> midiInputsStatus;

    //recording
    void populateRecordingTab();
};


