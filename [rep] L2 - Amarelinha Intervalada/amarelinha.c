/*
Motivação
No jogo de amarelinha é necessário jogar a pedrinha no número certo. Não vale jogar no número maior nem no número menor. Pra ficar mais divertido, dois amigos decidiram reformular as regras do jogo permitindo jogar a pedrinha dentro do intervalo estabelecido.

Funcionava, assim: João, joga, é tua vez. Entre 6 e 8. Vai!


Ação
Dado uma sequência de números e um intervalo, calcule quantas vezes um número cai dentro do intervalo fechado. Em um intervalo fechado, os valores inferior e superior também fazem parte do intervalo.

Entrada e Saída
Entrada:
1a linha:  a quantidade n de números, o limite inferior e o limite superior do intervalo.

2a linha: a sequência de n números.

Saída:
quantos números estão dentro do intervalo, incluindo os limites inferior e superior.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39857
*/

#include <stdio.h>

int main(){
    
    int quant = 0;
    int inflim = 0;
    int suplim =0;
    int line = 0;
    
    int sum = 0;
    int count = 0;
    
    
    scanf("%d %d %d", &quant, &inflim, &suplim);
    
    int aux= inflim;
    
    while(count < quant){
        scanf("%d",&line);
        while(inflim <= suplim){
            if(inflim == line){
                sum++;
            }        
            inflim++;
        }
        
        inflim = aux;
        
        count++;
    }
    

    printf("%d",sum);
}