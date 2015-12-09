#include <iostream>

void func(int) {}

int main()
{
        int i = 0x7fff; // max pos value = 32767
        long l;
        float f;
        const void *mem = "Boush";

        l = i;
        f = i;

        std::cout << l << std::endl;
        std::cout << f << std::endl;

        l = static_cast<long>(i);
        f = static_cast<float>(i);
        const char *name = static_cast<const char *>(mem);

        std::cout << l << std::endl;
        std::cout << f << std::endl;
        std::cout << name << std::endl;

        return 0;
}
