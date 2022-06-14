/*
    Ação
Leia dois números inteiros e imprima a soma, a subtração, a multiplicação e o resto da divisão entre eles respectivamente.

Entrada e Saída
Entrada:

Valores de A,B em inteiro, um por linha.
Saída:

Valores da soma, subtração, multiplicação e resto da divisão em inteiro, um por linha.
O valor de B nunca será 0, então não se preocupe com divisão por 0.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39904


*/



#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    
    scanf("%d\n%d",&x,&y);
    
    int z = x+y ;
    int i = x-y ;
    int k = x*y ;
    int j = x%y ;
    
    
    printf("%d\n%d\n%d\n%d",z, i, k, j);
}