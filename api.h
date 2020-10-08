#ifndef API_H
#define API_H


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

};

#endif // API_H
