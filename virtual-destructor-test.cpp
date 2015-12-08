#include <iostream>
using namespace std;

class Base
{
public:
        virtual ~Base() {
                cout << "Base()" << endl;
                f();
        }
        virtual void f() { cout << "Base::f()" << endl; }
};

class Derived : public Base
{
        ~Derived () {
                cout << "~Derived()" << endl;
        }
        void f() { cout << "Derived::f()" << endl; }
};

int main()
{
        Base *b = new Derived;
        delete b;
        return 0;
}
