/*
Motivação
Pai, a tia falou que na arca de noé os animais entravam aos pares. O que é pares papai?
Pares são números que formam um casalzinho, tipo 2 passarinhos, mas também vale pra vários pares como 4, 6, 8, 10, etc.
Papai, e se não tiver nenhum passarinho pra botar na arca, 0 é par?
Ação
Some todos os números inteiros pares que estão entre A e B, inclusive.

Zero é par?:
Descubra em http://www.profcardy.com/cardicas/tirateima.php?id=1

Entrada e Saída
Entrada:

Dois números inteiros A e B.
Saída:

A soma de todos os números pares, ou "invalido" caso B seja menor que A.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39869
*/
#include <stdio.h>

int main(){
    int a = 0; 
    int b = 0; 
    int sum = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(b > a){
    while (a <= b){
        if(a % 2 == 0){
            sum+= a;
        }
            a++;
        }
        printf("%d", sum);
    }else if(b < a){
        printf("invalido");
    }else if(a == b){
        printf( "%d",b);
    }
    
    return 0;
}