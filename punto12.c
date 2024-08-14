#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i < 11; ++i) {
        printf("Numero en decimal: %d\n", i);
        printf("Numero en hexadecimal: %d\n", i);
        if (i > 7) {
            if (i == 8) {
                printf("Numero en octa: 10\n");
            } else if (i == 9) {
                printf("Numero en octa: 11\n");
            } else if (i == 10) {
                printf("Numero en octa: 12\n");
            }
        } else {
            printf("Numero en octa: %d\n", i);
        }
    }
    return 0;
}