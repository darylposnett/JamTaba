#pragma once

#include <QString>
#include <QMap>
#include <memory>
#include <QSet>

namespace Ninjam {

class User;

class Server {

public:
    static const int MIN_BPM = 40;
    static const int MAX_BPM = 400;
    static const int MAX_BPI = 64;
    static const int MIN_BPI = 4;

private:

    Server(QString host, int port);

    int port;
    QString host;
    int maxUsers;
    short bpm;
    short bpi;
    bool activeServer;// = true;
    QString streamUrl;
    QString topic;

    QMap<QString, User*> users;

    bool containBot;// = false;

    static QMap<QString, std::shared_ptr<Server>> servers;

    static QString getUniqueName(QString host, int port) ;

public:
    static Server* getServer(QString host, int port) ;

    inline void setStreamUrl(QString streamUrl) { this->streamUrl = streamUrl; }

    inline QString getStreamUrl() const { return streamUrl; }

    inline bool hasStream() const{
        //tirei o stream do server do mutant porque ele usa nsv, e não encontrei lib para esse formato
        return !streamUrl.isNull() && !host.toLower().contains("mutant");
    }

    inline void setMaxUsers(unsigned int maxUsers) {  this->maxUsers = maxUsers; }

    inline void setIsActive(bool active) { this->activeServer = active; }

    inline bool containsBot() const{ return containBot; }

    bool containsUser(const User& user) const;

    void addUser(User* user) ;

    inline short getBpi() const{ return bpi; }

    inline short getBpm() const{  return bpm; }

    inline int getMaxUsers() const{ return maxUsers; }

    QList<User*> getUsers() const;

    inline bool isActive() const{ return activeServer;}

    inline int getPort() const{return port;}

    inline QString getHostName() const{return host;}

    bool containsBotOnly() const;

    QString getUniqueName() const;

    bool setBpm(short bpm) ;

    bool setBpi(short bpi) ;

    void refreshUserList(QSet<User*> onlineUsers) ;

    inline QString getTopic() const {return topic;}

    inline void setTopic(QString topicText) {this->topic = topicText;}
};

QDataStream &operator<<(QDataStream &out, const Ninjam::Server &server);

}




