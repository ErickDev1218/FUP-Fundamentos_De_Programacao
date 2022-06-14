/*
Motivação
Os formatos de data e hora são diversos. Leia hora, minuto, dia, mês e ano e imprima no formato hh:mm dd/mm/aa. Você deve certificar-se de imprimir um 0 à esquerda para garantir que todas as informações tenham 2 dígitos.

Entrada:
hora, minuto, dia, mês e ano, um por linha.
Saída:
hh:mm dd/mm/aa.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40248

*/

#include <stdio.h>
int main(){
    int h,min,d,mes,ano;
    scanf("%d\n %d\n %d\n %d\n %d",&h,&min,&d,&mes,&ano);

    printf("%02d:%02d %02d/%02d/%02d\n",h,min,d,mes,ano%100);
}