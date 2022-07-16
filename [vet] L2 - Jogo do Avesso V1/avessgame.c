/*
A brincadeira do avesso funciona assim.

Tem um chefe e os operários.
Os operarios ficam em fila.
O chefe diz o nome de um operario e os dois operários
que estavam perto dele tem que trocar de posição.
Se estavam em pé, ficam agachados.

Suponha a seguinte configuração onde cada número
representa uma pessoa.

[3 4 8 9 1 5 6]
O chefe grita "4", então o "3" e o "8" se agacham.
O vetor fica assim:
[-3 4 -8 9 1 5 6]
Usando o sinal negativo para representar o agachado.
Depois o chefe grita "9". O -8 e o 1 se alteram ficando
assim:
[-3 4 8 9 -1 5 6]
O 8 volta ao normal e o 1 se agacha.

Considere que nunca existem duas pessoas com o mesmo número
no vetor. Se o chefe disser um número errado, ninguém deve
se mexer.

[DS]
Entrada:
--linha 1: o tamanho do vetor de operarios(N < 100) e o grito do chefe( 0 < X < 100)
--linha 2: o vetor de operários, cada elemento entre (0 < 100)
Saída:
o novo vetor

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39847
*/

#include <stdio.h>
int main(){
    int x = 0;
    int num = 0;
    scanf("%d %d",&x,&num); //Tamanho do v1 e grito;
    
    int vet[x]; //Criando o vetor;
    
    for(int i  = 0; i < x; i++){
        scanf("%d",&vet[i]); //Percorrendo o vet e colocando valores;
    }
    
    
    for(int i = 0; i < x; i++){
        if(vet[i] == num){
            if(x > 2 && i == (x-1)){
                vet[i-1] *= -1;
            }else if(x > 2 && i >= 1){
                vet[i+1] *= -1;
                vet[i-1] *= -1;
            }else if(x > 2 && i == 0){
                vet[i+1] *= -1;
            }else if(x <= 2 && i == 0){
                vet[i+1] *= -1;
            }else if(x <= 2 && i == 1){
                vet[i-1] *= -1;
            }
        }
    }

    
    for(int i = 0; i < x; i++){
        printf("%d ",vet[i]);
    }
    
}