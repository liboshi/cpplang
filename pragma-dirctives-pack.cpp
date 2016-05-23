
#include <stddef.h>
#include <stdio.h>

struct S {
        int i;
        short j;
        double k;
};

#pragma pack(2)
struct T {
        int i;
        short j;
        double k;
};

int
main() {
        printf("%zu ", offsetof(S, i));
        printf("%zu ", offsetof(S, j));
        printf("%zu ", offsetof(S, k));

        printf("%zu ", offsetof(T, i));
        printf("%zu ", offsetof(T, j));
        printf("%zu ", offsetof(T, k));
}
