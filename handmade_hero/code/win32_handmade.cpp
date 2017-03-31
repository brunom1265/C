/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Casey Muratori $
   $Notice: (C) Copyright 2014 by Molly Rocket, Inc. All Rights Reserved. $
   ======================================================================== */

#include <windows.h>

int CALLBACK WinMain(
    HINSTANCE hInstance, //Acess memory ou debug that is on windows
    HINSTANCE hPrevInstance, // dont need
    LPSTR lpCmdLine, //dont need
    int nCmdShow)
{
    MessageBox(0, "This is the handmade hero", "Handmade Hero",
               MB_OK|MB_ICONINFORMATION);
    return(0);
}


