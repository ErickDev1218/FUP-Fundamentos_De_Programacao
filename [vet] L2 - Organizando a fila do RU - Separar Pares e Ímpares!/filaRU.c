/*
Você será responsável por organizar a fila do R.U. Então, teve uma brilhante ideia. 

No lugar de uma única fila, você vai formar duas filas: uma fila para servidores e uma fila para alunos.

####

Entrada: 1a linha: a quantidade de pessoas na fila.
2a linha: um vetor de inteiros onde um número ímpar representa um aluno e um número par representa um servidor.

Saída: 1a linha: os numeros impares na ordem que aparecem na entrada
2a linha: os números pares na ordem que aparecem na entrada

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39850
*/

#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d",&x);
    int vet[x];

    
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);
    }
    
    for(int i = 0; i < x; i++){
        if(vet[i] % 2 == 1){
            printf("%d ",vet[i]);
        }
    }
    
    printf("\n");
    
    for(int i = 0; i < x; i++){
        if(vet[i] % 2 == 0){
            printf("%d ",vet[i]);
        }
    }
}