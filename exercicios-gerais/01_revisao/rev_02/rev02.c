#include <stdio.h>

int main(){
    int l=0, j=0, x=1;

    scanf("%d", &l);
    for(int i=0; i < l; i++){
        j = i+1;
        while(j != 0){
            printf("%d ", x);
            x = x+1;
            j = j-1;

        }
        printf("\n");
    }
    return 0;
}