/*
Elvis Presley Da Silva tem uma coleção de tazos numerados. Ele colocou todos em ordem numérica, mas está na dúvida de qual tazo elem tem mais vezes repetido. Faça um código que ajude Elvis a saber o número do tazo que se repete mais. Se mais de um tazo tiver no topo da quantidade, imprima todos eles.

[DS] 

Entrada: 

linha 1: um número positivo com a quantidade de elementos do vetor (1 a 50).
linha 2: o vetor de inteiros (ordenado).
Saída: 
Os elementos que se repetem mais

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39832
*/

#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d",&x);
    
    int vet[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);
    }
    
    int contador = 0;
    int aux = 0;
    
    for(int i = 0; i < x; i++){
        contador = 0;
        for(int k = i; k < x; k++){
            if(vet[i] == vet[k]){
                contador++;
            }
        }
        if(aux <= contador){
            aux = contador;
        }    
    }
    for(int i = 0; i < x; i++){
        contador = 0;
        for(int k = i; k < x; k++){
            if(vet[i] == vet[k]){
                contador++;
            }
        }
        if(aux == contador){
            printf("%d ",vet[i]);
        }    
    }
}