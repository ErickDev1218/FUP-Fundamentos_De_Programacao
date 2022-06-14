/*
Ação
Aprenda a fazer divisão inteira e quebrada.

Entrada
Dois valores inteiros do usuário, n1 e n2, um por linha.
Saída
O resultado da divisão inteira de n1 por n2, o resto da divisão inteira e o resultado da divisão quebrada com 2 casas decimais.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40246
*/

#include <stdio.h>
int main(){
    int n1 = 0;
    int n2 = 0;
    scanf("%d\n %d",&n1,&n2);
    float x = n1;
    printf("%d\n",n1/n2);
    printf("%d\n",n1%n2);
    printf("%.2f",x/n2);

}