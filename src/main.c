/*******************************************************************************

Vehicle Security Platform

Copyright 2023, Zhejiang University, South China University of Technology.
All rights reserved.

*******************************************************************************/

#include "public.h"
#include "syst.h"

int main() {
    VEH_INT32 ret;

    // Init Simulator System
    ret = VehSystInit();
    if (ret != VEH_OK) {
        VehTermPrint("Veh Syst Init Err: 0x%x\n", ret);
        return ret;
    }
    VehTermPrint("Veh Syst Init Succ\n");

    VehSystRun();

    return 0;
}
