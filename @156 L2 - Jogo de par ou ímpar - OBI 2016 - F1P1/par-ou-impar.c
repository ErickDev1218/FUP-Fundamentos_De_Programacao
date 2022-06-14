/*
Entrada
A entrada contém três linhas, cada uma com um número inteiro, P, D_1 e D_2, nesta ordem. Se P = 0 então Alice gritou “par”, ao passo que se P=1 então Bob gritou “par”. Os números D_1 e D_2 indicam, respectivamente, o número de dedos estendidos da Alice e do Bob.

Saída
Seu programa deverá imprimir uma única linha, contendo um único número inteiro, que deve ser 0 se Alice foi a ganhadora, ou 1 se Bob foi o ganhador.

Restrições
P = 0 ou P = 1
0 ≤ D_1 ≤ 5
0 ≤ D_2 ≤ 5

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40266
*/

#include <stdio.h>
int main(){
    int p = 0;
    int d1 = 0;
    int d2 = 0;
    scanf("%d\n %d\n %d",&p,&d1,&d2);
    int res = (d1-10) + (d2-10);
    if(p == 0){
        if(res%2==0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }else if(p == 1){
        if(res%2==0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
}