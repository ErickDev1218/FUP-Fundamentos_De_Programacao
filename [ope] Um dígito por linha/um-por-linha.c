/*
Leia um inteiro com 4 dígitos, e imprima um dígito por linha.

<<
2468
>>
2
4
6
8

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39900
*/

#include <stdio.h>

int main() {

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;
int i = 0;


scanf("%d", &a);



b = a/1000;
c = a%1000;
d = c/100;
e = c%100;
f = e/10;
g = e%10;
h = g/1;

printf("%d\n%d\n%d\n%d\n", b,d,f,h);

}