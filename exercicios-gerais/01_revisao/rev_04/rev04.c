#include <stdio.h>

int main(){
    int numero, resto=0, i=1, octal=0;
    scanf("%d", &numero);

    while(numero!=0){
        resto = numero % 8;
        octal += resto * i;
        i *= 10;
        numero /= 8;
    }

    printf("%d", octal);

    return 0;
}