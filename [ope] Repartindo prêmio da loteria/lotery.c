/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada um deu para a realização da aposta. Faça um programa que lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.

Exemplo:
Aposta do 1o: 10
Aposta do 2o: 20
Aposta do 3o: 30
Premio: 120
Ganho do 1o: 20.00, pois 120 * 10 / 60 = 20
Ganho do 2o: 40.00, pois 120 * 20 / 60 = 40
Ganho do 3o: 60.00, pois 120 * 30 / 60 = 60

*Imprima os valores da saída com duas casas decimais. 

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39908
*/

#include <stdio.h>

int main(){
    float aposta1 = 0;
    float aposta2 = 0;
    float aposta3 = 0;
    float premio = 0;
    scanf("%f",&aposta1);
    scanf("%f",&aposta2);
    scanf("%f",&aposta3);
    scanf("%f",&premio);
    
    float tudojunto=aposta1+aposta2+aposta3;
    
    float res1 = premio*aposta1/tudojunto;
    float res2 = premio*aposta2/tudojunto;
    float res3 = premio*aposta3/tudojunto;
    
    printf("%.2f\n",res1);
    printf("%.2f\n",res2);
    printf("%.2f",res3);
    
}