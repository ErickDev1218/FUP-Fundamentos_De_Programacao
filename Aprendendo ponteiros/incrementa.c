/*
Atividade desenvolvida na sala de aula no dia 21/06/2022, sob orientação da professora Viviane.

Ação
Faça com que o valor de X seja incrementado com Y
*/


#include <stdio.h>
void incrementa(int *x, int y){
    *x +=y;
}

int main(){
    int x, y;
    printf("Digite um valor para X = ");
    scanf("%d",&x);
    printf("Digite um valor para Y = ");
    scanf("%d",&y);

    incrementa(&x,y);

    printf("Seu X mudou, agora X eh = %d",x);
}