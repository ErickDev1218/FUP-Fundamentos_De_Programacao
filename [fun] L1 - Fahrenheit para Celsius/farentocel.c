/*
Descrição
Dada uma temperatura em graus Fahrenheit, podemos convertê-la para graus Celsius usando a fórmula abaixo:

Celsius = (Fahrenheit - 32) * 5 / 9

Faça uma função chamada converte_para_celsius que recebe uma temperatura em Fahrenheit e retorna esta temperatura graus Celsius.

Na função main, leia uma temperatura em graus Fahrenheit (ponto flutuante) e imprima o valor desta temperatura em Celsius. Para isso chame a função converte_para_celsius.

Entrada e Saída
Entrada:

Temperatura em graus Fahrenheit (ponto flutuante).
Saída:

Temperatura em graus Celsius.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39853
*/

#include <stdio.h>

float converter_para_celsius(float x){
    float cel = (x-32)*5/9;
    return cel;
}

int main(){
    float fah = 0;
    scanf("%f",&fah);
    float res = converter_para_celsius(fah);
    printf("%.2f",res);
    return 0;
}