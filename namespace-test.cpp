// namespace
//
#include <iostream>
using namespace std;

namespace foo
{
        int value() { return 7; }
}

namespace bar
{
        const double pi = 3.1416;
        double value() { return 2 * pi; }
}

int main() {
        cout << foo::value() << endl;
        cout << bar::value() << endl;
        cout << bar::pi << endl;
        return 0;
}
