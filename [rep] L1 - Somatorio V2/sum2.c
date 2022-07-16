/*
Motivação
Marilurdes tem muitos muitos pares de sapatos. Só que vários deles ela compartilha com as irmãs Arilúcia e Barisilene. Quantos pares de sapato são divisíveis pelas 3 entre Arilúcia e Barislene?

Ação
Some todos os números inteiros pares que são divisíveis por 3 que estão entre A e B, inclusive.

Entrada e Saída
Entrada:

Dois números inteiros A e B.
Saída:

A soma de todos os números pares divisíveis por 3, ou "invalido" caso A seja maior que B.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39870
*/
#include <stdio.h>

int main(){
    
    
    int a = 0;
    int b = 0;
    
    int res = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a > b){
        printf("invalido");
    }else{
        while(a <= b){
            if(a % 2 == 0 && a % 3 == 0){
                res+=a;
            }
            a++;
            
        }
        printf("%d",res);
    }
}