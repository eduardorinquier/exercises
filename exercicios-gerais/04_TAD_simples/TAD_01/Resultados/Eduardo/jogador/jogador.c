#include <stdio.h>
#include "jogador.h"
#include "jogada.h"

#define ID_JOGADOR_1 1
#define ID_JOGADOR_2 2



/**
 * Cria um jogador com o id passado como parâmetro e retorna o jogador criado.
 * 
 * @param idJogador o id do jogador (1 ou 2).
 * 
 * @return tJogador o jogador criado.
 */
tJogador CriaJogador(int idJogador){
    tJogador jogador;

    jogador.id = idJogador;
    
    return jogador;
}


/**
 * Recebe um jogador e um tabuleiro e retorna o tabuleiro com a jogada do jogador.
 * 
 * @param jogador o jogador que fará a jogada.
 * @param tabuleiro o tabuleiro atual.
 * 
 * @return o tabuleiro atualizado com a jogada do jogador.
 */
tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro){
    tJogada jogada = LeJogada();
    if(EhPosicaoValidaTabuleiro(ObtemJogadaX(jogada), ObtemJogadaY(jogada))){
        if(EstaLivrePosicaoTabuleiro(tabuleiro, ObtemJogadaX(jogada), ObtemJogadaY(jogada))){
            MarcaPosicaoTabuleiro(tabuleiro,jogador.id,ObtemJogadaX(jogada), ObtemJogadaY(jogada));
        }else{
            return tabuleiro;
        }
    }else{
        return tabuleiro;
    }
}


/**
 * Recebe um jogador e um tabuleiro e retorna 1 se o jogador venceu e 0 caso contrário.
 * 
 * @param jogador o jogador a ser verificado.
 * @param tabuleiro o tabuleiro atual.
 * 
 * @return 1 se o jogador venceu, 0 caso contrário.
 */
int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro){
        for (int i = 0; i < 3; i++) {
            if (tabuleiro.posicoes[i][0] == tabuleiro.posicoes[i][1] && tabuleiro.posicoes[i][1] == tabuleiro.posicoes[i][2]) return 1;
            if (tabuleiro.posicoes[0][i] == tabuleiro.posicoes[1][i] && tabuleiro.posicoes[1][i] == tabuleiro.posicoes[2][i]) return 1;
        }

        if (tabuleiro.posicoes[0][0] == tabuleiro.posicoes[1][1] && tabuleiro.posicoes[1][1] == tabuleiro.posicoes[2][2]) return 1;
        if (tabuleiro.posicoes[0][2] == tabuleiro.posicoes[1][1] && tabuleiro.posicoes[1][1] == tabuleiro.posicoes[2][0]) return 1;
        return 0;
}