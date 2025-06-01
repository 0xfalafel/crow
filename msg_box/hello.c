#include <windows.h>

// Compile & run
// cl .\hello.c /link user32.lib
// .\hello.exe

int main(void) {
	MessageBoxW(
		NULL,
		L"My second message box",
		L"Hi mom!",
		MB_OK | MB_ICONEXCLAMATION
	);
	return EXIT_SUCCESS;
}
