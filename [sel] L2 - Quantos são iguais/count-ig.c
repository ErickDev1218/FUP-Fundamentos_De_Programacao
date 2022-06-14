/*
Entrada e Saida
Leia três valores inteiros do usuário.
Imprima a quantidade de valores iguais dentre os três.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39895

*/

#include <stdio.h>

int main(){
    int x  = 0;
    int y = 0;
    int z = 0;
    
    scanf("%d\n%d\n%d",&x,&y,&z);
    
    if(x==y && y==z){
        printf("3");
    }else if(x==y || x==z || y==z){
        printf("2");
    }else{
        printf("0");
    }
}