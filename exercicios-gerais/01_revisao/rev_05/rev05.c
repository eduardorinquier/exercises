#include <stdio.h>

int main(){
    int m, n, valor;
    int xi, yi, xf, yf;
    int xa, ya;
    char ordem[5];

    scanf("%d %d", &m, &n);

    int matriz[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }

    scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
    scanf("%s", ordem);

    xa = xi - 1;
    ya = yi - 1;
    xf = xf - 1;
    yf = yf - 1;

    matriz[xa][ya] = 1;

    printf("(%d,%d) ", xa + 1, ya + 1);

    while(xa != xf || ya != yf){

        int andou = 0;

        for(int i = 0; i < 4; i++){

            int novo_x = xa;
            int novo_y = ya;

            if(ordem[i] == 'C'){
                novo_x--;
            }
            else if(ordem[i] == 'B'){
                novo_x++;
            }
            else if(ordem[i] == 'D'){
                novo_y++;
            }
            else if(ordem[i] == 'E'){
                novo_y--;
            }

            if(novo_x >= 0 && novo_x < m &&
               novo_y >= 0 && novo_y < n){

                if(matriz[novo_x][novo_y] == 0){

                    xa = novo_x;
                    ya = novo_y;


                    matriz[xa][ya] = 1;

                    printf("(%d,%d) ", xa + 1, ya + 1);

                    andou = 1;

                    break;
                }
            }
        }

        if(andou == 0){
            break;
        }
    }

    return 0;
}