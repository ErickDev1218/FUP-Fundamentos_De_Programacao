/*
MOTIVAÇÃO
Um grupo de amigos se reúne todas as noites para brincar de esconde-esconde na rua. Mas todas vezes que eles vão escolher quem começará procurando os demais sempre há um que fica criando confusão para não ser o jogo. Sendo assim, Mario teve a brilhante ideia de tirarem Zerim ou Um. Dessa maneira será decidida de forma justa quem começará contando.

AÇÃO
Ajude Mario e seus amigos com o Zerim ou Um. Implemente um programa que leia zero ou um de cada amigo. E diga quem ganhou ou se deu empate.

Entrada e Saída
Entrada:

As opções dos 3 jogadores, uma por linha.
Saida:

O jogador(jog1, jog2, jog3) que ganhou ou "empate".

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39891
*/
#include <stdio.h>

int main() {
    int p1=0,p2=0,p3=0;
    
    scanf("%d",&p1);
    scanf("%d",&p2);
    scanf("%d",&p3);
 
    if(p1 == p2 && p2 == p3){
        printf("empate");
    }
    
    if(p1==p2 && p2 !=p3){
        printf("jog3");
    }
    
    if(p2==p3 && p3 != p1){
        printf("jog1");
    }
    
    if(p1==p3 && p3 != p2){
        printf("jog2");
    }
 
    
}