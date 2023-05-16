/*******************************************************************************

Vehicle Security Platform

Copyright 2023, Zhejiang University, South China University of Technology.
All rights reserved.

*******************************************************************************/

#include "comm_ble.h"
#include "public.h"
#include "driver_ble.h"

VEH_INT32 VehCommBleInit() {
    return VEH_OK;
}

VEH_INT32 VehCommBleSendMsg() {
    VehTermPrint("Veh Comm Ble Send Msg\n");
    BspDriverBleSendMsg();
    return VEH_OK;
}

VEH_INT32 VehCommBleRecvMsg() {
    return VEH_OK;
}
