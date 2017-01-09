
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

int
main() {
    std::wstring ret = :"Hello wstring";
    wcout << ret << endl;
    char *str = new char[MAX_PATH];
    wcstombs(str, ret.c_str(), MAX_PATH);
    cout << "Hello: " << str << endl;
    cout << ::atof(str) / 1024.00 << endl;
}
