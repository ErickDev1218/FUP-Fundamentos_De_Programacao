/*
Ação
Encontre o menor de 5 números usando comando de repetição. Ou seja, para cada iteração da repetição leia o próximo número e teste se ele é o menor encontrado até então.

Entrada e Saída
Entrada:

5 valores inteiros um por linha.
Saída:

O menor valor inteiro lido.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39871
*/
#include <stdio.h>

int main(){
    
    int a = 0;
    int b = 0;
    int step = 1;
    
    scanf("%d", &b);
    
    while(step <= 5){
        scanf("%d",&a);
        if(a < b){
            b = a;
        }
        
        
        step++;
    }
    printf("%d",b);
}