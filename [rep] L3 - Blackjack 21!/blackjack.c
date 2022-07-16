/*
Faça um programa que conte o valor de uma mão de blackjack.
Ele recebe as cartas e calcula usando as seguintes
regras:. 'K', 'Q' e 'J' valem 10 pontos. 'Ás' vale 11 pontos. As
outras cartas valem o número indicado na carta.
Se a soma de pontos for maior que 21, o 'Ás' passa a valer
1 ponto, diminuindo a soma total, tentando fazer o valor
baixar para menos de 21.

Na entrada do programa, os números 1, 11, 12 e 13 são respectivamente Ás, J, Q e K.


I/0
Entrada:
A entrada começa informando a quantidade de cartas, e é seguida por uma sequência de inteiros que identificam as cartas.

Saída:
A saída deve se um inteiro informando o valor da mão do blackjack.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39861
*/
#include <stdio.h>

int main(){
    int quant = 0;
    int count = 0;
    int card = 0;
    int sum = 0;
    int sumas = 0;
    scanf("%d",&quant);
    
    while(count < quant){
        scanf("%d",&card);
        if(card == 1){
            sum+=10+card;
            sumas++;
            if(sum > 21){
                sum = sum - (sumas*10);
            }
        }else if(card == 11 || card == 12 || card == 13){
            sum+=10;
        }else{
            sum+=card;
        }
        count++;
    }
    
    printf("%d",sum);
}