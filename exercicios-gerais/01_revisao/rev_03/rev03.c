#include <stdio.h>

int main(){
    int qtd=0;
    scanf("%d", &qtd);
    int lista[qtd];
    int flag = 0, flag2=0;

    for(int i=0; i<qtd; i++){
        scanf("%d", &lista[i]);
    }

    for(int i=0; i<qtd; i++){
        flag = 0;
        for(int j=0; j<qtd; j++){
            if(j==i){
                continue;
            }
            if(lista[j] == lista[i]){
                flag = 1;
            }
        }
        if(flag==0){
            printf("%d ", lista[i]);
            flag2 = 1;
        }
    }
    if(flag2==0){
        printf("NENHUM");
    }

    return 0;
}