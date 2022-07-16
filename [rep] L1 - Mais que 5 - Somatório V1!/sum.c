/*
Motivação
Rápido Mariana: quanto é 1 + 2 + 3 + 4? Perguntou Fernando de 7 anos para Mariana de 5.
Essa é fácil. Pergunta outra.
Quanto é 4 + 5 + 6 + 7 + 8 + 9?
Essa também é fácil.
Como assim é fácil?!
É fácil! Mais que 5 é tudo MUITOS.
Ação
Some todos os números inteiros positivos de A até B.

Entrada e Saída
Entrada:

Dois números inteiros A e B.
Saída:

A soma de todos os números de A até B (incluindo o A e o B na soma), ou "invalido" caso A seja maior do que B.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39868
*/
#include <stdio.h>

int main (){
    
    int a = 0;
    int b = 0;
    
    int sum = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    
    if( a > b ){
        printf("invalido");
    }else{
        while(a <= b){
            sum += a;
            a+=1;
            
            
        }
        printf("%d",sum);
    }
    
}