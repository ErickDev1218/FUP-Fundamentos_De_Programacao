/*
Atividade desenvolvida na sala de aula no dia 21/06/2022, sob orientação da professora Viviane.

Ação
Troque os valores das variaveis usando ponteiros.
*/

#include <stdio.h>
void swap(int *a, int *b){
    int z = *a;
    int w = *b;
    *a = w;
    *b = z;
}

int main(){
    int x,y;
    printf("Digite um valor para X = ");
    scanf("%d",&x);
    printf("Digite um valor para Y = ");
    scanf("%d",&y);

    swap(&x,&y);
   printf("O valor de X = %d e o valor de Y = %d",x,y);
}