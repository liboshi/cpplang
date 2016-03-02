#include <iostream>

using namespace std;

class Mother {
public:
        Mother() { cout << "Mother: no parameter" << endl; }
        Mother(int a) { cout << "Mother: int paramete\n" << endl; }
};

class Daughter : public Mother {
public:
        Daughter(int a) { cout << "Daughter: int parameter\n" << endl; }
};

class Son : public Mother {
public:
        Son(int a) : Mother(a) { cout << "Son: int parameter" << endl; }
};

int main() {
        Daughter lucy(0);
        Son      bill(0);
        return 0;
}
