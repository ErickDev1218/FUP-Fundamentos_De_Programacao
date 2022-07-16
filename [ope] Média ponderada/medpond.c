/*
Uma disciplina tem uma prova de peso 5, uma prova de peso 3, e um trabalho de peso 2. Leia as 3 notas (nesta ordem) e imprima a média final.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39907
*/

#include <stdio.h>

int main(){
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float medfin = 0;
    
    scanf("%f\n",&n1);
    scanf("%f\n",&n2);
    scanf("%f\n",&n3);
    
    medfin = (5*n1+3*n2+2*n3)/10;
    printf("%.2f",medfin);
}