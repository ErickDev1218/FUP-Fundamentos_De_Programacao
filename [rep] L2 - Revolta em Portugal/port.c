/*
Ação
Verifique se o grupo de Manoel e Joaquim conseguirá vencer essa batalha.
Dado um intervalo de dois números, os números pares representam os soldados
e os números impares representam os rebeldes infiltrados.
Some as forças e descubra qual dos dois grupos é mais forte.

I/0
Entrada:
1a linha: Limite inferior do intervalo
2a linha: Limite superior do intervalo

Saída:
"soldados" se os soldados(pares) somados são mais fortes.
"rebeldes" se os rebeldes(impares) somados são mais fortes.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39866
*/

#include <stdio.h>

int main(){
    int n1 = 0;
    int n2 = 0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    int sold = 0;
    int rebe =0;
    
    while(n1 <= n2){
        if(n1%2==0){
            sold+=n1;
        }else{
            rebe+=n1;
        }
        n1++;
    }
    if(sold > rebe){
        printf("soldados");
    }else{
        printf("rebeldes");
    }
}