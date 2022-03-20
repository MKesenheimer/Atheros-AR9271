//
//  CleanAtherosUser.h
//  CleanAtheros
//
//  Created by Abel Espinosa on 2/8/15.
//  Copyright (c) 2015 Abel Espinosa. All rights reserved.
//
#include <IOKit/IOUserClient.h>
#include "CleanAtheros.h"

class com_gubawang_AR9271_CleanAtherosUser : public IOUserClient
{
    OSDeclareDefaultStructors(com_gubawang_AR9271_CleanAtherosUser)
private:
    task_t                          m_task;
    com_gubawang_AR9271_CleanAtheros* m_driver;
public:
    virtual override bool init(OSDictionary *dictionary = 0);
    virtual override void free(void);
    virtual override IOService *probe(IOService *provider, SInt32 *score);
    virtual override bool start(IOService *provider);
    virtual override void stop(IOService *provider);
};
