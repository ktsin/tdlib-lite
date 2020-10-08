#include "api.h"
#include "defaults.h"
#include <openssl/evp.h>

api::api()
{
    this->serverIP = DEFAULT_SERVER_IP;
    this->serverPort = DEFAULT_SERVER_PORT;
    this->serverSecret = DEFAULT_SERVER_SECRET;
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
