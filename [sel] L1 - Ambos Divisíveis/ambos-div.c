/*
AÇÃO
Leia dois inteiros e diga se ambos são divisiveis por 3 ou por 5.

ENTRADA
Dois números inteiros.

SAÍDA
"sim" (sem aspas) caso ambos sejam divisiveis por 3 ou 5. E "nao" (sem aspas) caso não sejam divisíveis


Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39894
*/

#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    
    scanf("%d %d",&x,&y);
    
    if( ((x%5==0) || (x%3 == 0)) && ((y%5==0) || (y%3==0)) ){
        printf("sim");
    }else{
        printf("nao");
    }
}