/*
Atividade desenvolvida na sala de aula no dia 21/06/2022, sob orientação da professora Viviane.

Ação
Imprima os caracteres que equivalem na tabela ASCII do 36 até o 126.
*/


#include <stdio.h>

int main(){

    char i;
    for(i = 32; i <= 126 ; i++){
        printf("%c ",i);
    }
}