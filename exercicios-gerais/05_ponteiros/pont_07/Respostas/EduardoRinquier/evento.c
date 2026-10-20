#include <stdio.h>
#include "evento.h"

/**
 * Cadastra um novo evento no calendário e o insere na próxima posição do array.
 *
 * @param eventos Array de eventos onde o novo evento será cadastrado.
 * @param numEventos Ponteiro para o número atual de eventos cadastrados.
 */
void cadastrarEvento(Evento* eventos, int* numEventos){
    scanf("%s", eventos[*numEventos].nome);
    scanf("%d %d %d", &eventos[*numEventos].dia, &eventos[*numEventos].mes, &eventos[*numEventos].ano);
    *numEventos += 1;
}

/**
 * Exibe todos os eventos cadastrados no calendário.
 *
 * @param eventos Array de eventos a serem exibidos.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void exibirEventos(Evento* eventos, int* numEventos){
    printf("Eventos cadastrados:\n");
    for(int i=0; i<*numEventos; i++){
        printf("%d - %s - %2d/%2d/%d\n", i, eventos[i].nome, eventos[i].dia, eventos[i].mes, eventos[i].ano);
    }
}

/**
 * Troca a data de um evento específico no calendário.
 *
 * @param eventos Array de eventos onde o evento será modificado.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarDataEvento(Evento* eventos, int* numEventos){
    int index=0;
    scanf("%d", &index);

    if (index < 0 || index >= *numEventos) {
        printf("Indice invalido!\n");  
        return;                          
    }
    scanf("%d %d %d", &eventos[index].dia, &eventos[index].mes, &eventos[index].ano);
}

/**
 * Troca a posição de dois eventos, a partir do índice, dentro do array de eventos.
 *
 * @param eventos Array de eventos onde a troca será realizada.
 * @param indiceA Ponteiro para o primeiro índice.
 * @param indiceB Ponteiro para o segundo índice.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarIndicesEventos(Evento* eventos, int* indiceA, int* indiceB, int* numEventos){
    Evento aux = eventos[*indiceA];
    eventos[*indiceA] = eventos[*indiceB];
    eventos[*indiceB] = aux;
}


