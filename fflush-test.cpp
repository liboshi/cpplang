#include <stdio.h>
#include <unistd.h>

char buffer[1024];

int main()
{
        FILE *fp;
        if ((fp = fopen("output.txt", "a+")) != NULL) {
                fprintf(fp, "%s", "test");
        }
        //fflush(fp);
        sleep(5);
        return 0;
}
