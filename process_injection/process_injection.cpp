#include <stdio.h>
#include <windows.h>

DWORD PID = NULL;

int main(int argc, char* argv[]) {

	if (argc < 2) {
		printf("[-] usage: %s <PID>", argv[0]);
	}

	PID = atoi(argv[1]);
	printf("[*] trying to open handle to process (%ld)\n", PID);

	return EXIT_SUCCESS;
}