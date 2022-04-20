#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2019
*/

void WriteFormatted(FILE* stream, const char* format, ...) {
	va_list args;
	va_start(args, format);
	vfprintf(stream, format, args);
	va_end(args);
}

int main() {
	FILE* pFile;

	pFile = fopen("myfile.txt", "w");

	WriteFormatted(pFile, "Call with %d variable argument.\n", 1);
	WriteFormatted(pFile, "Call with %d variable %s.\n", 2, "arguments");

	fclose(pFile);

	_getch();
	return 0;
}