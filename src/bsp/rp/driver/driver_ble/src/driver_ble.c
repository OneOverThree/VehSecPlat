#include "driver_ble.h"
#include "public.h"

VEH_INT32 BspDriverBleInit() {
    return VEH_OK;
}

VEH_INT32 BspDriverBleSendMsg() {
    VehTermPrint("Bsp Ble send Msg\n");
    return VEH_OK;
}

VEH_INT32 BspDriverBleRecvMsg() {
    return VEH_OK;
}