/*
Motivação
O seu professor de FUP está curioso para saber a média das notas da sua turma. Para isso, ele armazenou as notas e agora pede sua ajuda para implementar um programa que retorna a média aritmética das notas.

A média é a soma de todos os valores dividida pela quantidade de valores.

Ação
Dada uma sequência de notas, calcule a média dos valores contidos nela.

Entrada e Saída
Entrada:

1ª linha: a quantidade de notas.
2ª linha: as notas em ponto flutuante.
Saída:

O valor da média com uma casa decimal.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39865
*/
#include <stdio.h>

int main(){
    int quantnot = 0;
    float notas = 0;
    float aux = 0;
    
    scanf("%d",&quantnot);
    float total = quantnot;
    
    while(quantnot > 0){
        quantnot--;
        scanf("%f",&notas);
        aux += notas;
    }
    aux = aux/total;
    printf("%.1f",aux);
}