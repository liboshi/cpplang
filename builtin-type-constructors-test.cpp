#include <iostream>

class Test
{
        int i;
public:
        Test(int ii);
        void print();
};

Test::Test(int ii) : i(ii) {}
void Test::print() {
        std::cout << i << std::endl;
}

int main() {
        Test a(1), b(2);
        a.print();
        b.print();
        float pi(3.1415);
        std::cout << pi << std::endl;
}
