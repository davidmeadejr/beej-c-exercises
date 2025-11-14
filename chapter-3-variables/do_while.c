#include <stdio.h>

int main(void) {
    int i = 10;

    do {
        printf("do-while: i is %d\n", i);
    } while (i < 10);

    printf("All done!\n");
}