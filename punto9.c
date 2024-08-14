#include <stdio.h>
#include <stdlib.h>

int main() {
    char var;
    scanf("%c", &var);
    while (var != '\n') {
        if (var > 96 && var < 123) {
            printf("La letra: %c es minuscula\n", var);
        } else {
            printf("La letra: %c no es minuscula\n", var);
        }
        scanf("%c", &var);
    }
    return 0;
}