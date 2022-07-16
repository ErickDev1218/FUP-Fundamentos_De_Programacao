/*
Ação
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostrar:

o total a pagar com desconto de 10% (para o caso de venda à vista);
o valor de cada parcela, no parcelamento em 3 x sem juros;
a comissão do vendedor, no caso da venda ser à vista (5% sobre o valor com desconto )
a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
Entrada e Saída
Entrada: O valor da venda

Saída (todos os valores com duas casas decimais):

1a linha: o valor com desconto de 10%

2a linha: o valor da parcela

3a linha: a comissao (a vista)

4a linha: a comissao (a prazo)

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39903
*/

#include <stdio.h>

int main (){
    
    float value = 0;
    scanf("%f",&value);
    
    float desc = 0;
    desc = value - (value/10);
    printf("%.2f\n",desc);
    
    float parc = 0;
    parc = value / 3;
    printf("%.2f\n",parc);
    
    float comisavist = 0;
    comisavist = (desc/2)/10;
    printf("%.2f\n",comisavist);
    
    float comisprazo = 0;
    comisprazo = (value/2)/10;
    printf("%.2f",comisprazo);
}