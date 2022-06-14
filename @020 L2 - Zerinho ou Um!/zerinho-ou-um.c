/*
Ação
Receba três valores correspondentes dos jogadores e em seguida imprima quem foi o vencedor ou se ouve empate segundo as regras do zerim ou um.

Entrada:
As opções dos 3 jogadores, uma por linha.
Saída:
O jogador (jog1, jog2, jog3) que ganhou ou “empate”.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40269

*/

#include <stdio.h>
int main(){
    int jog1 = 0,jog2 = 0,jog3 = 0;
    scanf("%d\n %d\n %d",&jog1,&jog2,&jog3);
    
    if(jog1 == jog2 && jog2 == jog3){
        printf("empate\n");
    }else if(jog1 != jog2 && jog2 == jog3){
        printf("jog1\n");
    }else if(jog2 != jog1 && jog1 == jog3){
        printf("jog2\n");
    }else if(jog3 != jog1 && jog1 == jog2){
        printf("jog3\n");
    }
}