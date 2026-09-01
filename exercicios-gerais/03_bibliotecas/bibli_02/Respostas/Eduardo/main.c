#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int opcao, l1=0,c1=0,l2=0,c2=0;

    scanf("%d %d", &l1, &c1);
    int matrix[l1][c1];
    matrix_read(l1, c1, matrix[l1][c1]);

    scanf("%d %d", &l1, &c1);
    int matrix[l1][c1];
    matrix_read(l1, c1, matrix[l1][c1]);

    printf("\n1 - Somar matrizes\n");
    printf("2 - Subtrair matrizes\n");
    printf("3 - Multiplicar matrizes\n");
    printf("4 - Multiplicacao de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        
            matrix_print(int rows, int cols, int matrix[rows][cols]);
            break;
        case 2:

            matrix_print(int rows, int cols, int matrix[rows][cols];
            break;
        case 3:
            if(possible_matrix_multiply(l1, c2) == 1){
                
            }
            matrix_print(int rows, int cols, int matrix[rows][cols]);
            break;
        case 4:

            matrix_print(int rows, int cols, int matrix[rows][cols]);
            break;
        case 5:

            matrix_print(int rows, int cols, int matrix[rows][cols];
            break;
        case 6:
            printf("6 - Encerrar o programa\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}