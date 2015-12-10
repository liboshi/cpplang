#include <stdio.h>
#include <unistd.h>

char buffer[1024];

int main()
{
        FILE *fp;
        if ((fp = fopen("output.txt", "a+")) != NULL) {
                int i = 0;
                while (i < 100){
                        fprintf(fp, "%s\n", "test");
                        fflush(fp);
                        i++;
                }
        }
        sleep(5);
        return 0;
}
