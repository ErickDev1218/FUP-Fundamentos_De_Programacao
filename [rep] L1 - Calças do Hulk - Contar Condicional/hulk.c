/*
Motivação
Bruce Banner precisa comprar novas calças para quando ele vira o gigante Hulk.

Ação
Conte quantas calças são MAIORES que o cós do Hulk para que ele possa vestir.

Entrada e Saída
Entrada:

1ª linha: Os números x  e n, em que x é o cós do Hulk e n a quantidade de calças que serão testadas.

2ª linha: Cós de cada calça a ser testada.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39872
*/

#include <stdio.h>

int main (){
    
    int cos = 0;
    int pants = 0;
    scanf("%d %d", &cos,&pants);
    int line = 0;
    
    
    int step = 1;
    int count = 0;
    while(step <= pants){
        scanf("%d", &line);
        if(line > cos){
            count++;
        }
        step++;
    }
    printf("%d",count);
}