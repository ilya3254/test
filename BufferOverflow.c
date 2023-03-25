#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

int main(int argc, char* argv[]) {
	char buff[10] = { 0 };
	if (argc > 1)
		strcpy(buff, argv[1]);
	return 0;
}