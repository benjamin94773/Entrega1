#include <stdio.h>
#include <stdlib.h>

int main (){
    printf("Ingrese un ano: \n");
    int num;
    int ans;
    scanf("%d", &num);
    if(!(num % 4) && (num%100 ||!(num%400))){
        ans = 1;
    }else{
        ans = 0;
    }
    if (ans){
        printf("El ano %d es bisiesto\n", num);
    }else{
        printf("El ano %d no es bisiesto\n", num);
    }

    

    return 0;
}
