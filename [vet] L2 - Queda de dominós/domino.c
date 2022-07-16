/*
Motivação:
Deoclécio tem o passatempo de montar filas de dominós para derrubá-los depois.

Para fazer um efeito mais interessante, ele usa peças de dominó com tamanhos variados, sempre colocando as menores peças no começo da fila.
Para ajudar nessa importante tarefa, Deo pediu sua ajuda para verificar se uma fila de dominós está dentro do padrão, ou seja, se os tamanhos dos dominós estão ordenados de forma crescente.

Ação
Leia um vetor de tamanho n (quantidade de dominós) , e diga se ele está ordenado de forma crescente.


Entrada e Saída
Entrada:

O número n ( 0 < n <= 50) de dominós.
A altura (inteira) de cada dominó.
Saída:

"ok" caso  caso vetor esteja ordenado.
"precisa de ajuste" caso vetor esteja desordenado.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39852
*/

#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d",&x);
    int vet[x];
    int control = 0;
    int res = 0;
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);
    }
    
    if(x == 1){
        printf("ok");
        return 0;
    }
    
    for(int i = 0; i < x; i++){
        if(vet[i] >= control){
            control = vet[i];
            res += 1;
        }else if(vet[i] < control){
            res -= 1;
        }
    }
    
    if(res == x){
        printf("ok");
    }else{
        printf("precisa de ajuste");
    }
    
}