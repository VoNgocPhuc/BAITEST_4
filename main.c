#include <stdio.h>
#include <windows.h>


DWORD WINAPI baitest(LPVOID lpThreadParameter)
{
	while (1)
	{
		printf("Say hello\r\n");
		Sleep(2000);
	}
}
void main()
{
	HANDLE baitest1 = CreateThread(0, 32, baitest, 0, 0, 0);
	while (1)
	{
		printf("Xin chao\r\n");

		Sleep(1000);
	}
}
