/*#include "stdio.h"
#include "windows.h"

void Init() {
	AllocConsole();
	AttachConsole(GetCurrentProcessId());
	freopen("$CON", "w", stdout);

	printf("Initialization done!\n");
}

BOOL WINAPI DllMain(
	_In_ HINSTANCE hinstDLL,
	_In_ DWORD     fdwReason,
	_In_ LPVOID    lpvReserved)
	{
		if (fdwReason == DLL_PROCESS_ATTACH)
			Init();
	}*/