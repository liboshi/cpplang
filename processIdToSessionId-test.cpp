#include <iostream>
#include <string>
#include <windows.h>
#include <tlhelp32.h>

using namespace std;

DWORD
getProcId(wstring& processName) {
        PROCESSENTRY32 pt;
        HANDLE hsnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
        if (hsnap == INVALID_HANDLE_VALUE) {
                return 0;
        }

        pt.dwSize = sizeof(hsnap, &pt);

        if (Process32First(hsnap, &pt)) {
                do {
                        if (!processName.compare(pt.szExeFile)) {
                                CloseHandle(hsnap);
                                return pt.th32ProcessID;
                        }
                } while (Process32Next(hsnap, &pt));
        }

        CloseHandle(hsnap);
        return 0;
}
