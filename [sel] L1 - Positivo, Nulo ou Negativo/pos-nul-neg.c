/*
Ação
Entrada: Leia um valor inteiro do usuário.

Saída: Imprima "positivo", "nulo" ou "negativo" de acordo com o valor lido.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39893

*/

#include <stdio.h>

int main(){
    
    int x = 0;
    scanf("%d",&x);
    if(x>0){
        printf("positivo");
    }else if(x<0){
        printf("negativo");
    }else{
        printf("nulo");
    }
}