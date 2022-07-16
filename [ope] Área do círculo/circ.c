/*
Leia o raio de um círculo e imprima sua área (com duas casas decimais).

Fórmula: area = 3.14 * raio * raio

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39905
*/

#include <stdio.h>

int main (){
    float raio = 0;
    float area = 0;
    scanf("%f",&raio);
    area = 3.14 * raio * raio;
    
    printf("%.2f",area);
}