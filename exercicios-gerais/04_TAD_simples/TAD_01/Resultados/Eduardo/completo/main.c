#include <stdio.h>
#include "jogada.h"
#include "jogador.h"
#include "jogo.h"
#include "tabuleiro.h"

int main(){
    while(1){
        tJogo jogo = CriaJogo();
        ComecaJogo(jogo);
        if(AcabouJogo == 1){
            if(ContinuaJogo() == 1){
                continue;
            }else{
                return 0;
            }
        }
    }
}