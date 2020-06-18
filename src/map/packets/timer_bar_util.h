﻿#ifndef _CTIMERBARUTILPACKET_H
#define _CTIMERBARUTILPACKET_H

#include "../../common/cbasetypes.h"

#include "basic.h"

#include <string>

class CCharEntity;

class CTimerBarUtilPacket : public CBasicPacket
{
public:
    CTimerBarUtilPacket(CCharEntity* PChar);
    void addCountdown(uint32 seconds);
    void addBar1(std::string name, uint8 value);
    void addBar2(std::string name, uint8 value);
};

#endif