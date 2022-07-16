/*
Vários competidores disputaram uma competição interessante. Eles tinham duas pedras para lançar. Chamemos de pedra A e pedra B. Eles tinham que arremessar ambas as pedras a pelo menos 10 metros de distância. Ganhava a competição, o competidor que arremessou as duas além da linha de 10 m o mais próximo possível uma da outra. Se alguma das pedras tiver distância menor que 10 metros, o competidor estará desclassificado.


I/0
Entrada:
O número N de competidores na primeira linha. Cada uma das linhas subsequentes terá a distância das pedras A e B.

Saída:
O número do competidos vitorioso. O primeiro competidor tem número 0. Caso haja empate, mostre o de menor número. Se ninguém ganhar o jogo, porque nao conseguiram lançar as bolas além dos 10 metros, imprima "sem ganhador"

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39860
*/

#include <stdio.h>

int main(){
    
    int n = 0;
    int count = 0;
    int primjog = 0;
    int segjog = 0;
    int dist = 0;
    int less = 1000000;
    int win = -1;
    
    scanf("%d",&n);
    
    while(count < n){
        scanf("%d %d",&primjog, &segjog);
        if(primjog >= 10 && segjog >= 10){
            dist = primjog - segjog;
            if(dist < 0){
                dist = dist * (-1);
            }
            if(dist < less){
                less = dist;
                win = count;
            }
        }
         count++;
    }
    
    if(win == -1){
        printf("sem ganhador");
    }else{
        printf("%d",win);
    }
    
}