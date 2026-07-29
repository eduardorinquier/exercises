#include <stdio.h>
#include <math.h>

int main(){
    float cx=0, cy=0, dx=0, dy=0, r1=0, r2=0, campo[200][200];
    scanf("%f %f %f %f %f %f", &cx, &cy, &r1, &dx, &dy, &r2);

    double soma_raios_quadrado = pow(r1 + r2, 2);
    double distancia_centros_quadrado = pow(cx - dx, 2) + pow(cy - dy, 2);

    if (distancia_centros_quadrado <= soma_raios_quadrado) {
        printf("ACERTOU");
    } else {
        printf("ERROU");
    }

    return 0;
}