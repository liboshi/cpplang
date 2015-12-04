#include <fstream>

using namespace std;

int main()
{
        std::fstream fp;
        fp.open("output.txt", std::fstream::app);

        int i = 0;
        while(i < 10) {
                fp << "Hello world";
                i++;
        }

        fp.close();

        return 0;
}
