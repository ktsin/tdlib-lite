#ifndef API_H
#define API_H
#include <QtNetwork>

class api {
public:
    api();
    api(char* IP, int port, char* secret);
    short initSession();
    short doAuth();
private:
    char* serverIP;
    int serverPort;
    char* serverSecret;
    QTcpSocket* server;

};

#endif // API_H
