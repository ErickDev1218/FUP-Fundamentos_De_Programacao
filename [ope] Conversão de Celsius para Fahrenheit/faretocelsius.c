/*
Leia uma temperatura em graus Celsius e imprima seu correspondente em graus Fahrenheit.

Fórmula: Fahrenheit = Celsius * 9 / 5 + 32

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39906
*/

#include <stdio.h>

int main(){
    
    float tempcel = 0;
    float tempfah = 0;
    
    scanf("%f",&tempcel);
    
    tempfah = tempcel * 9 / 5 + 32;
    printf("%.2f",tempfah);
}