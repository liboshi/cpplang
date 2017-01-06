// queryregkey.cpp : Defines the entry point for the console application.
//

#include <string>
#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include <windows.h>

using namespace std;

wstring ReadRegValue(HKEY root, wstring key, wstring name)
{
    HKEY hKey;
    if (RegOpenKeyEx(root, key.c_str(), 0, KEY_READ, &hKey) != ERROR_SUCCESS)
        throw "Could not open registry key";

    DWORD type;
    DWORD cbData;
    if (RegQueryValueEx(hKey, name.c_str(), NULL, &type, NULL, &cbData) != ERROR_SUCCESS)
    {
        RegCloseKey(hKey);
        throw "Could not read registry value";
    }

    if (type != REG_SZ)
    {
        RegCloseKey(hKey);
        throw "Incorrect registry value type";
    }

    wstring value(cbData/sizeof(wchar_t), L'\0');
    if (RegQueryValueEx(hKey, name.c_str(), NULL, NULL, reinterpret_cast<LPBYTE>(&value[0]), &cbData) != ERROR_SUCCESS)
    {
        RegCloseKey(hKey);
        throw "Could not read registry value";
    }

    RegCloseKey(hKey);

    size_t firstNull = value.find_first_of(L'\0');
    if (firstNull != string::npos)
        value.resize(firstNull);

    return value;
}

int wmain(int argc, wchar_t* argv[])
{
    wcout << ReadRegValue(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Policies\\VMware, Inc.\\VMware Blast\\Config", L"MaxBandwidthKbps");
    return 0;
}
