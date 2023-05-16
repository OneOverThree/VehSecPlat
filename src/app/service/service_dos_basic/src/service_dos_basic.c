/*******************************************************************************

Vehicle Security Platform

Copyright 2023, Zhejiang University, South China University of Technology.
All rights reserved.

*******************************************************************************/

#include "service_dos_basic.h"

#include "public.h"
#include "comm_ble.h"

void VehServiceDosBasic() {
    VehCommBleSendMsg();
}