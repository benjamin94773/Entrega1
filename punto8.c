#include <stdio.h>
#include <stdlib.h>

int main() {
    char var;
    scanf("%c", &var);
    while (var != '\n') {
        if (var > 64 && var < 91) {
            printf("La letra: %c es mayuscula\n", var);
        } else {
            printf("La letra: %c no es mayuscula\n", var);
        }
        scanf("%c", &var);
    }
    return 0;
}