/*
Motivação
"Pode usar a calculadora na prova de FUP?!"

Ação
Leia dois números inteiros, representando os números a serem computados, e um número inteiro representando a operação a ser realizada: (1) para soma, (2) para subtração, (3) para multplicação e (4) para divisão. Imprima na tela o resultado.

I/O
Leia do usuário dois valores inteiro um valor inteiro para a operação ('1', '2', '3' ou '4')
Imprima o resultado da operação em inteiro. Se a operação não pode ser realizada, imprima "invalida".

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39888
*/
#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int res = 0;
    if((b==0&&c==4) || c>4){
     printf("invalida");   
    }else if(c == 1){
        res = a+b;
        printf("%d",res);
    }else if(c == 2){
        res = a-b;
        printf("%d",res);
    }else if(c == 3){
        res = a*b;
        printf("%d",res);
    }else if(c == 4){
        res = a/b;
        printf("%d",res);
    }
    
    
}