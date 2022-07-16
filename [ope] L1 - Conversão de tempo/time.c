/*
Leia o tempo em segundos, e imprima este tempo em horas, minutos e segundos.

Dica: use divisão inteira e o operador de resto da divisão.

1 minuto = 60 segundos.
1 hora = 60 minutos * 60 segundos = 3600 segundos.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39901
*/
#include <stdio.h>

int main() {
    int enter = 0;
    scanf("%d",&enter);
    
    printf("%d\n",enter/3600);
    printf("%d\n",(enter%3600)/60);
    printf("%d\n",(enter%3600)%60);
    
}