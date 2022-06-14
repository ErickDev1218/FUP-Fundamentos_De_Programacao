/*
Ação
Receba três valores e imprima o valor do meio.


Entrada e Saída
Entrada:

Os três valores, uma por linha, todos os valores serão diferentes.

Saída:

O valor do meio.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39897
*/


#include <stdio.h>

int main (){
    
    int primeiro = 0;
    int segundo = 0;
    int terceiro = 0;
    
    
    
    scanf("%d",&primeiro);
    scanf("%d",&segundo);
    scanf("%d",&terceiro);
    
    if((primeiro > terceiro && primeiro > segundo) && (primeiro < terceiro)){
        printf("%d",terceiro);
    }else if( primeiro < segundo && primeiro > terceiro){
        printf("%d",primeiro);
    }else if(primeiro > segundo && primeiro < terceiro){
        printf("%d",primeiro);
    }else if(primeiro < segundo && segundo > terceiro){
        printf("%d",terceiro);
    }else if(primeiro < segundo && segundo < terceiro){
        printf("%d",segundo);
    }else if(terceiro > segundo && segundo > primeiro){
        printf("%d",segundo);
    }else if (primeiro > segundo && segundo > terceiro){
        printf("%d",segundo);
    }else if(primeiro > segundo && segundo < terceiro){
        printf("%d",terceiro);
    }
    else{
        printf("Algo deu errado!");
    }
}