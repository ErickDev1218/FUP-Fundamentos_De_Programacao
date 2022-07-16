/*
Motivação:
Um ônibus lotado consegue desafiar a leis da física.
A quantidade de gente é tão grande que o motorista não consegue enxergar quantos entram ou quantos saem do busão.
Em uma viagem, ele pediu para você que fizesse um programa que o ajude a decidir quando é a hora de partir.

Ação
Dado um inteiro C, que indica a capacidade do ônibus prevista pela legislação e um valor M (quantidade de pessoas que entram ou saem) , mostre o estado do busão.
Imprima (sem aspas) :

"vazio"                     -se não houver passageiros.
"ainda cabe"           -se houver passageiros, mas não está lotado ainda.
"lotado"                   -se a quantidade de passageiros alcançar a capacidade.
"hora de partir"     -se a quantidade de passageiros alcançar duas vezes a capacidade.
Seu programa deve encerrar quando for a hora de partir.

Você pode assumir:

C > 0.
Um número positivo representa a entrada de pessoas.
Um número negativo representa a saída de pessoas.
Nunca vão sair mais pessoas do que tem no ônibus
Entrada e Saída
Entrada:

O inteiro C (capacidade).
O inteiro M (movimentação). Continue lendo até o ônibus partir.
Saída:

O estado do ônibus para cada entrada ou saída de gente.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39867
*/

#include <stdio.h>

int main(){
    int cap = 0;
    int mov =0;
    int sum = 0;
    scanf("%d",&cap);
    
    while(sum < cap*2){
        scanf("%d",&mov);
        sum +=mov;
        if(sum == 0){
            printf("vazio\n");
        }else if(sum < cap){
            printf("ainda cabe\n");
        }else if(sum >= cap && sum < cap*2){
            printf("lotado\n");
        }else if(sum >= cap*2){
            printf("hora de partir\n");
        }
        
    }
    
    return 0;
}