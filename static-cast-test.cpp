#include <iostream>

void func(int) {}

int main()
{
        int i = 0x7fff; // max pos value = 32767
        long l;
        float f;

        l = i;
        f = i;

        std::cout << l << std::endl;
        std::cout << f << std::endl;

        l = static_cast<long>(i);
        f = static_cast<float>(i);

        std::cout << l << std::endl;
        std::cout << f << std::endl;

        return 0;
}
