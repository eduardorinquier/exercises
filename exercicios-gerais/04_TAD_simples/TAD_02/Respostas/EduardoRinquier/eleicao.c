#include <stdio.h>
#include "candidato.h"
#include "eleitor.h"
#include "eleicao.h"

#define MAX_CANDIDATOS_POR_CARGO 3
#define MAX_ELEITORES 10

typedef struct {
    tCandidato presidentes[MAX_CANDIDATOS_POR_CARGO];
    int totalPresidentes;

    tCandidato governadores[MAX_CANDIDATOS_POR_CARGO];
    int totalGovernadores;

    int votosBrancosPresidente;
    int votosNulosPresidente;

    int votosBrancosGovernador;
    int votosNulosGovernador;

    tEleitor eleitores[MAX_ELEITORES];
    int totalEleitores;
    
} tEleicao;

/**
 * @brief Inicializa uma eleição com valores padrão (zerando os votos invalidos).
 * Ainda nessa função, é lido a quantidade de candidatos e os candidatos são lidos e armazenados.
 * @return Eleição inicializada.
 */
tEleicao InicializaEleicao(){
    tEleicao eleicao;
    eleicao.totalEleitores = 0;
    eleicao.totalGovernadores = 0;
    eleicao.totalPresidentes = 0;
    eleicao.votosBrancosGovernador = 0;
    eleicao.votosBrancosPresidente = 0;
    eleicao.votosNulosGovernador = 0;
    eleicao.votosNulosPresidente = 0;
    int qtdCand, j=0, z=0;
    tCandidato candAtual;

    scanf("%d", &qtdCand);
    
    
    for(int i=0;i<qtdCand;i++){
        candAtual = LeCandidato();
        if(candAtual.cargo == 'G'){
            eleicao.governadores[j] = candAtual;
            j++;
        }else{
            eleicao.presidentes[z] = candAtual;
            z++;
        }
    }

    return eleicao;
}

/**
 * @brief Realiza uma eleição.
 * Nessa função, é lido a quantidade de eleitores e os eleitores são lidos e armazenados.
 * @param eleicao Eleição a ser realizada.
 * @return Eleição com os resultados da votação.
 */
tEleicao RealizaEleicao(tEleicao eleicao){
    int qtdEle;
    scanf("\n%d", &qtdEle);
    for(int i=0;i<qtdEle;i++){
        eleicao.eleitores[i] = LeEleitor();

        for(int j=0;j<eleicao.totalGovernadores;)
    }


}

/**
 * @brief Imprime o resultado da eleição na tela a partir da aparucao dos votos.
 * @param eleicao Eleição a ser impressa.
 */
void ImprimeResultadoEleicao(tEleicao eleicao);
