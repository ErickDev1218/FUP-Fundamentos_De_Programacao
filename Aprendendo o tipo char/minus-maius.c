/*
Atividade desenvolvida na sala de aula no dia 21/06/2022, sob orientação da professora Viviane.

Ação
Receba letras minusculas e imprima a mesma letra maiuscula
*/

#include <stdio.h>
int main(){
    char a =' ';
    printf("Digite uma letra minuscula: ");
    scanf("%c",&a);
    int i = 'a' - 'A';
    if(a >= 'a' && a <= 'z'){
        a -= i;
        printf("Sua letra maiscula eh: %c",a);
    }else{
        printf("Voce nao digitou um caractere minusculo.");
    }
}