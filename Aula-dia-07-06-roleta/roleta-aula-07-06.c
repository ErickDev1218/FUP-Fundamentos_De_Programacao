/*
Esta questão envolve roleta de cassino, foi disponibilizada, assim como todas as outras neste repositório, por professores da UFC. Neste caso, em sala de aula pela professora Viviane.
*/
#include <stdio.h>
int main(){
    int x = 0;
    printf("Qual sera o tamanho da roleta? ");
    scanf("%d",&x);
    int jog = 0;
    int vet[x];

    for(int i = 0; i < x; i++){
        vet[i] = 0;
    }

    for(int  i = 1; i < 6; i++){
        printf("Qual o valor que caiu no %d lancamento? ",i);
        scanf("%d",&jog);
        vet[jog]++;
    }

    for(int i = 0; i < x; i++){
        printf("O numero %d foi sorteado %d vezes\n",i,vet[i]);
    }
}