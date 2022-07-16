/*
Um fugitivo, um helicóptero e um policial estão em posições distintas numa pista circular, exatamente como a mostrada na figura ao lado, com dezesseis posições numeradas de 0 a 15 em direção anti-horária. O helicóptero e o policial ficam sempre parados. O objetivo do fugitivo é chegar no helicóptero sem passar pelo policial antes, claro. Ele pode decidir correr na direção horária, ou na direção anti-horária. Neste problema, dadas as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo decide correr, seu programa deve dizer se ele vai ou não conseguir fugir! Na figura, se o fugitivo decidir correr na direção horária, ele consegue fugir; se decidir correr na direção anti-horária, ele vai ser preso antes de chegar no helicóptero!
Entrada
A entrada consiste de uma linha com quatro inteiros: H, P, F e D, representando, respectivamente, as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo corre, -1 para horário e 1 para anti-horário.
Saída
Seu programa deve imprimir uma linha contendo o caracter “S” se o fugitivo consegue fugir, ou “N” caso contrário.
Restrições
Os inteiros H, P e F são distintos e estão entre 0 e 15, inclusive.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=41611
*/

#include <stdio.h>

int main(){
    int h = 0;
    int p = 0;
    int f = 0;
    int d = 0;
    
    scanf("%d %d %d %d",&h,&p,&f,&d);
    
    if(p > f && d==-1){
        printf("S\n");
    }else if(p < f && d==-1 && f>h && h!=0){
        printf("S\n");
    }else if(p < f && d == -1){
        printf("N\n");
    }else if(p > f && d == 1){
        printf("N\n");
    }else{
        printf("S\n");
    }
}