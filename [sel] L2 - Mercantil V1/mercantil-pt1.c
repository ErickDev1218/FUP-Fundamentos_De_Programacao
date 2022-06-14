/*
Entrada:

linha 1: o valor do produto.(valor inteiro entre 1 e 100)
linha 2: o chute do Primeiro
linha 3: o chute de Segundo
Saida:

"primeiro" se o chute do Primeiro for o mais próximo do valor do produto
"segundo" se o chute do Segundo for o mais próximo do valor do produto
"empate" caso ambos ficarem à mesma distancia

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39890

*/

#include <stdio.h>

int main(){
    
    int x = 0;
    int y = 0;
    int z = 0;
    
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    
    
    
    
    if(x >= 1 && x <= 100){
        x=x;
    }else{
        x=0;
    }
    
    if((y+1==x || y-1==x) && (z+1==x || z-1==x)){
        printf("empate");
    }else if ((y+2==x || y-2==x) && (z+2==x || z-2==x)){
        printf("empate");
    }else if(y+1 == x || y-1==x){
        printf("primeiro");
    }else if (z+1==x || z-1==x){
        printf("segundo");
    }else if (y+2 == x || y-2==x){
        printf("primeiro");
    }else if (z+2==x || z-2==x){
        printf("segundo");
    }else{
        printf("Algo deu errado!");
    }
}