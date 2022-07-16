/*
MOTIVAÇÃO
Mês de março, todos os funcionários da empresa vão receber aumento. Para promover os menos favorecidos foram dados aumentos maiores para os funcionários que recebem menos.

Os que recebem até 1000.00 reais, vão ganhar 20%. Quem recebe até 1500.00 vai ganhar 15%. Quem recebe até 2000.00 vai ganhar 10%. Quem recebe mais de 2000.00 só vai ganhar 5%.

Os funcionários estão nervosos pra saber quanto vão ganhar no novo contracheque. Você resolveu fazer um programa no qual o funcionário entra com seu salário e o novo salário é informado.

AÇÃO
Faça um programa que leia o salário de um funcionário e dê como saída o salário acrescentado do aumento. Até R$ 1000.00 aumenta 20%; Até R$ 1500.00 aumenta 15%; Até R$ 2000.00 aumenta 10%; Mais de R$ 2000.00 aumenta 5%.

ENTRADA
Entrada - Salário atual do funcionário (float com até duas casas decimais)
SAÍDA
Saída - Novo Salário (float com duas casas decimais)

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39883
*/
#include <stdio.h>

int main(){
    float salario = 0;
    float aux = 0;
    scanf("%f",&salario);
    
    if(salario <= 1000.00){
        aux = salario + (salario*0.2);
    }else if(salario > 1000.00 && salario <= 1500.00){
        aux = salario + (salario*0.15);
    }else if(salario > 1500 && salario <= 2000.00){
        aux = salario + (salario*0.1);
    }else{
        aux = salario + (salario*0.05);
    }
    printf("%.2f",aux);
}