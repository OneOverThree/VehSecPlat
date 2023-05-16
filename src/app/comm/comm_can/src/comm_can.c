#include "comm_Can.h"
#include "public.h"
#include "driver_can.h"

VEH_INT32 VehCommCanInit() {
    return VEH_OK;
}

VEH_INT32 VehCommCanSendMsg() {
    VehTermPrint("Veh Comm Can Send Msg\n");
    BspDriverCanSendMsg();
    return VEH_OK;
}

VEH_INT32 VehCommCanRecvMsg() {
    return VEH_OK;
}
