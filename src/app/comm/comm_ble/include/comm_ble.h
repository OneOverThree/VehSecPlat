/*******************************************************************************

Vehicle Security Platform

Copyright 2023, Zhejiang University, South China University of Technology.
All rights reserved.

*******************************************************************************/

#ifndef COMM_BLE_H_
#define COMM_BLE_H_

#include "public.h"

VEH_INT32 VehCommBleInit();
VEH_INT32 VehCommBleSendMsg();
VEH_INT32 VehCommBleRecvMsg();

#endif  // COMM_BLE_H_