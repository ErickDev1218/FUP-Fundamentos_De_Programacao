/*
A história curiosa do brasileiro Joelison Fernandes da Silva está circulando o mundo todo. O fato é que ele é simplesmente o homem mais alto do país - tem 2,23 m de altura!, e depois de uma vida cheia de bullying e dificuldades, agora está feliz por ter encontrado sua alma gêmea. Uma mulher de apenas 1.52 m.

Que história ein?

Ação
Escreva um programa onde receba um vetor de tamanho 5 e que de como saída a soma do maior e do menor elemento deste vetor.

Entrada e Saída
Entrada:

Um vetor possuindo 5 elementos.
Saída:

A soma do maior elemento com o menor.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39851
*/

#include <stdio.h>
int main(){
    int vet[5];
    
    for(int i = 0; i < 5; i++){
        scanf("%d",&vet[i]);
    }
    
    int menor = 10;
    int maior = 0;
    int res = 0;
    
    for(int i = 0; i < 5; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    
    res = menor + maior;
    printf("%d",res);
}