#include "api.h"
#include "defaults.h"
#include "TL_serialization_op_codes.h"
#include <openssl/conf.h>
#include <openssl/evp.h>
#include <openssl/err.h>
#include <string.h>

api::api()
{
    this->serverIP = DEFAULT_SERVER_IP;
    this->serverPort = DEFAULT_SERVER_PORT;
    this->serverSecret = DEFAULT_SERVER_SECRET;
    this->server = new QTcpSocket();
    server->connectToHost(QHostAddress(QString(this->serverIP)),
                          (quint16)this->serverPort);
}

api::api(char *IP, int port, char *secret)
{
    this->serverIP = IP;
    this->serverPort = port;
    this->serverSecret = secret;
}

short api::initSession()
{
    return 0;
}

short api::doAuth()
{
    return 0;
}
