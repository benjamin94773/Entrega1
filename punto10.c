#include <stdio.h>
#include <stdlib.h>

int main() {
    int var1, var2, var3, mayor;
    scanf("%d", &var1);
    scanf("%d", &var2);
    scanf("%d", &var3);
    mayor = var1;

    if (mayor < var2) {
        mayor = var2;
        if (mayor < var3) {
            mayor = var3;
        }
    } else if (mayor < var3) {
        mayor = var3;
    }

    printf("El numero mayor es: %d\n", mayor);

    return 0;
}