#define NOMINMAX
#include <Windows.h>
#include <iostream>


INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
    // FreeConsole();
    MessageBox(NULL, "first message", "caption", 0);
    return 0;
}
