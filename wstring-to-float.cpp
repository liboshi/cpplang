
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_PATH 256

using namespace std;

int
main() {
    std::wstring ret = L"1024";
    wcout << ret << endl;
    char *str = new char[MAX_PATH];
    wcstombs(str, ret.c_str(), MAX_PATH);
    cout << "Hello: " << str << endl;
    wcout << ::atof(str) / 1024.00 << endl;
}
