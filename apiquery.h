#ifndef APIQUERY_H
#define APIQUERY_H
#include <apimethods.h>
#include <QList>
#include <QtAlgorithms>

class apiQuery
{
public:
    apiQuery();
    void appendMethod();
private:
    QList<apiMethods> queryChain;
};

#endif // APIQUERY_H
