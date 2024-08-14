#include <stdio.h>
#include <stdlib.h>
int main() {
    int cases;
    scanf("%d", &cases);
    while (cases != 0) {
        int n;
        int i;
        int count;
        int flag;
        scanf("%d", &n);
        while (n != 0) {
            flag = 0;
            i = 2;
            count = 1;
            while (i * i <= n) {
                if (n % i == 0) {
                    count++;
                }
                ++i;
            }
            if (count < 2) {
                flag = 1;
            }
            if (flag == 1) {
                printf("Es primo\n");
            } else {
                printf("No es primo\n");
            }
            scanf("%d", &n);
        }
        scanf("%d", &cases);
    }
    return 0;
}