/*
Descrição
Faça uma função chamada primo que recebe um inteiro positivo n e retorna 1 (verdadeiro) se n é primo, ou 0 (falso) caso contrário. Um número inteiro é primo quando é divisível apenas por 1 e por ele mesmo.

Uma estratégia simples para testar se um número n é primo consiste em procurar um divisor de n do número 2 até o número n-1. Se algum valor nesta faixa é divisor do n, então n não é primo. Caso contrário, n é primo.

Note que a função pode retornar 0 assim que encontrar um divisor de n entre 2 e n-1. Ou seja, não é necessário retornar apenas no final da função.

Na função main, leia dois inteiros positivos A e B, com A <= B, e imprima todos os primos de A até B. Portanto, use a função primo dentro da função main.

Entrada e Saída
Entrada:

1a linha: valor do inteiro positivo A.
2a linha: valor do inteiro positivo B (com A <= B).
Saída:

Todos os primos de A até B (um por linha).

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39854
*/

#include <stdio.h>

int primo(int a){
    int prim = a;
    int contador = 2;
    if(prim <= 1){
        return 0;
    }
    while(contador < prim){
        if(prim%contador == 0){
            return 0;
        }
        contador++;
    }
    return 1;
}

int main (){
    int a = 0;
    int b = 0;
    scanf("%d\n %d",&a,&b);
    int num = 0;
    
    while(a <= b){
        num = primo(a);
        if(num == 1){
            printf("%d\n",a);
        }
        a++;
    }
}