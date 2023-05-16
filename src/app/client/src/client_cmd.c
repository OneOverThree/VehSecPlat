/*******************************************************************************

Vehicle Security Platform

Copyright 2023, Zhejiang University, South China University of Technology.
All rights reserved.

*******************************************************************************/

#include "client.h"

#include "public.h"
#include <string.h>

#include "service_dos_basic.h"

void VehHelp(VEH_CHAR **argv) {
    VehTermPrint("========================================\n");
    for (int i = 0; i < VEH_CLIENT_CMD_NUM_MAX; i++) {
        if (strcmp(g_vehClientCmdList[i].cmd, "NULL") == 0) {
            break;
        }
        VehTermPrint("%s\t\t\t", g_vehClientCmdList[i].cmd);
        VehTermPrint("%s\n", g_vehClientCmdList[i].desc);
    }
    VehTermPrint("========================================\n");
}

struct VehClientCmd g_vehClientCmdList[VEH_CLIENT_CMD_NUM_MAX] = {
    { "?",          "show client cmd",              VehHelp             },
    { "help",       "show client cmd",              VehHelp             },
    { "DosBs",      "start basic dos attck",        VehServiceDosBasic  },
    { "NULL",       "NULL",                         NULL                },
};