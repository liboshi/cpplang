#include <fstream>

int main()
{
        std::fstream fp;
        fp.open("output.txt", std::fstream::app);

        fp << "Hello world";

        fp.close();

        return 0;
}
