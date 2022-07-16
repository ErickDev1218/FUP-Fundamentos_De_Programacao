/*
Descrição
Pedro e João foram no Silvio Santos. O programa era aquele que o Silvio mostrava um produto do mercantil e a pessoa que chegasse mais próximo do preço real ganhava.

Cada produto tem um valor real que nenhum dos competidores conhece. O primeiro competidor chuta um valor. O segundo competidor chuta se acha que o valor real é maior ou menor que o valor chutado pelo primeiro competidor.

O objetivo do seu programa é informar quem ganhou a disputa. Você receberá o chute do primeiro jogador, a escolha do segundo jogador (maior ou menor) e o valor real do produto.

O primeiro jogador ganha se ele acertar na mosca ou se o segundo errar a direção do chute.

Entrada/Saída
Entrada:

linha 1: o chute do primeiro jogador
linha 2: a escolha do segundo jogador (0 para menor e 1 para maior)
linha 3: o valor real do produto(0.01 até 1000.0)
Saida:

imprima quem foi o vencedor: "primeiro" ou "segundo"

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39884
*/

#include <stdio.h>
int main(){
    
    float chute1 = 0;
    float chute2 = 0;
    float valor = 0;
    scanf("%f\n %f\n %f",&chute1,&chute2,&valor);
    
    if(chute1 > valor && chute2 == 0){
        printf("segundo");
    }else if(chute1 < valor && chute2 == 0){
        printf("primeiro");
    }else if(chute1 > valor && chute2 == 1){
        printf("primeiro");
    }else{
        printf("segundo");
    }
}