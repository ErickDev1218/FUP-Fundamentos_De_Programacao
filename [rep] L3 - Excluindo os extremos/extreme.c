/*
Motivação
Numa competição de salto ornamental, vários juízes atribuem uma nota para o salto. A maior e menor nota são descartadas e a pontuação do salto é a soma das notas restantes. 

Ação

Leia uma sequência de valores, exclua o menor e o maior e mostre a soma dos valores restantes.

Entrada e Saída
Entrada:
A primeira linha é a quantidade de juízes.
As demais linhas são números inteiros representando as notas dos juízes.

Saída:
A soma dos valores restantes (excluindo o menor e o maior)

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39858
*/
#include <stdio.h>

int main (){
    
    int ju = 0;
    int seq = 0;
    int maior = 0;
    int menor = 10;
    int aux = 0;
    
    scanf("%d",&ju);
    
    while(ju > 0){
        scanf("%d",&seq);
        if(seq > maior){
            maior = seq;
        }
        if(seq < menor){
            menor = seq;
        }
        aux+=seq;
        ju--;
    }
    aux = aux - maior;
    aux = aux - menor;
    printf("%d",aux);
}