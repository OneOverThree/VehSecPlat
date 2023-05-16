#ifndef DRIVER_CAN_H_
#define DRIVER_CAN_H_

#include "public.h"

VEH_INT32 BspDriverCanInit();
VEH_INT32 BspDriverCanSendMsg();
VEH_INT32 BspDriverCanRecvMsg();

#endif  // DRIVER_CAN_H_