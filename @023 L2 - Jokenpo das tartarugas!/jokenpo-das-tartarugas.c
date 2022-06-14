/*
Ação
Receba as duas opções do jogadores e informe quem ganhou a partida. Os jogadores podem escolher entre R(rock), P(paper) e S(scissor), que correspondem ao nosso pedra, papel e tesoura.

Entrada:
1a linha: opção do jogador 1.
2a linha: opção do jogador 2.
Saída:
O jogador que ganhou ou empate (jog1, jog2, empate).

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40268

*/

#include <stdio.h>
int main(){
    char jog1;
    char jog2;
    scanf(" %c",&jog1);
    scanf(" %c",&jog2);

    if((jog1 == 'R' && jog2 == 'P') || (jog1 == 'P' && jog2 == 'S') || (jog1 == 'S' && jog2 == 'R')){
        printf("jog2\n");
    }else if(jog1 == jog2){
        printf("empate\n");
    }else if((jog2 == 'R' && jog1 == 'P') || (jog2 == 'P' && jog1 == 'S') || (jog2 == 'S' && jog1 == 'R')){
        printf("jog1\n");
    }
}