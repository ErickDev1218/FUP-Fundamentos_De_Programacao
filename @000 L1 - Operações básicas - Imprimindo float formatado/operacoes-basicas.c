/*
Ação
Leia dois números e imprima a soma, a subtração, a multiplicação, a divisão e o resto da divisão entre eles respectivamente.

Entrada:
Valores de A, B em inteiro, um por linha.
Saída:
Valores da soma, subtração, multiplicação, divisão e resto da divisão.

Valor da divisão deve ser em ponto flutuante de duas casas decimais.

O valor de B nunca será 0, então não se preocupe com divisão por 0.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40247. 
*/

#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    float x = 0;
    scanf("%d\n %d",&a,&b);
    x = a;

    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%.2f\n",x/b);
    printf("%d\n",a%b);

}