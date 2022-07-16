/*
Descrição
Você está tentando ensinar sua tartaruga RUFUS a jogar jokenpo (pedra, papel e tesoura).

Faça um programa que imprima na tela quem ganhou o jogo pedra, papel e tesoura para que RUFUS tenha algo divertido para fazer durante os seus banhos de sol no açude do Cedro.

I/O
Os jogadores podem escolher entre 1(pedra), 2(papel) e 3(tesoura).

Entrada: - 1a linha: opção do jogador 1. - 2a linha: opcao do jogador 2.

Saída: - O jogador que ganhou ou empate(jog1, jog2, empate)

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39886
*/
#include <stdio.h>

int main(){
    
    int a = 0;
    int b = 0;
    scanf("%d\n %d", &a, &b);
    
    if((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)){
        printf("jog1");
    }else if((b == 1 && a == 3) || (b == 2 && a == 1) || (b == 3 && a == 2)){
        printf("jog2");
    }else if(a==b){
        printf("empate");
    }
}