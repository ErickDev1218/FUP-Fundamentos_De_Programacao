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
linha 1: a quantidade de casos de teste
Cada caso de teste contem duas linhas
--linha 1: o tamanho do vetor de operarios(N < 100) e o grito do chefe( 0 < X < 100)
--linha 2: o vetor de operarios, cada elemento entre (0 < 100)
Saída:
o novo vetor

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39848
*/

#include <stdio.h>
int main(){
    int test = 0;
    scanf("%d\n",&test);

    for(int k = 0; k < test; k++){
            int x = 0;
        int grito = 0;
        scanf("%d %d",&x,&grito);
    
        int v[x];
        for(int i = 0; i < x; i++){
            scanf("%d",&v[i]);
        }
        
        for(int j = 0; j < x; j++){
            if(v[j] == grito){
                if(x > 2 && j == (x-1)){
                    v[j-1] *= -1;
                }else if(x > 2 && j == 0){
                    v[j+1] *= -1;
                }else if(x > 2 && j >= 1){
                    v[j-1] *= -1;
                    v[j+1] *= -1;
                }else if(x <= 2 && j == 0){
                    v[j+1] *= -1;
                }else if(x <= 2 && j >= 1){
                    v[j-1] *= -1;
                }
            }
        }
        for(int l = 0; l < x; l++){
            if(l+1 < x){
                printf("%d ",v[l]);
            }else if(l+1 == x){
                printf("%d \n",v[l]);
            }
        }
        for(int i = 0; i < x; i++){
            v[i] = 0;
        }
    }
}