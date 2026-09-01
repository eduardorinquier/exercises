#include <stdio.h>
#include "esfera_utils.h"

int main(){
    float raio=0;
    scanf("%f", &raio);

    printf("Area: %.2f \n", calcula_area(raio));
    printf("Volume: %.2f \n", calcula_volume(raio));

    return 0;
}