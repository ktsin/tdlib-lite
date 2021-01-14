#ifndef MTPROTO_H
#define MTPROTO_H
#define TL_MTPROTO_CRCs
#include <types.h>
#include "apiquery.h"
#include "TL_serialization_op_codes.h"


class mtproto
{
public:
    mtproto();
    bool initializeSession();
    int32_t* serialize(apiQuery& query);
    bool deserialize(int32_t* input);
    void reset();
private:

    bool isInitialized;
};

#endif // MTPROTO_H
