/*
Ação
Leia 4 números e imprima o maior valor.

Entrada e Saída
Leia quatro valores inteiros do usuário.
Imprima o maior valor lido.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39889
*/

#include <stdio.h>

int main(){
    
    int x = 0;
    int y = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&i);
    scanf("%d",&k);
    
    if(x > y){
        j = x;
    } else if (y > i){
        j = y;
    }else if (i > k){
        j = i;
    }else{
        j = k;
    }
    
    
    
    
    printf("%d",j);
}