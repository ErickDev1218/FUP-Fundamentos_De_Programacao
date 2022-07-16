/*
Motivação
Na saga dos Vingadores, o Ultron é um inimigo capaz de fazer cópias de sí mesmo. Maria e João são grandes fãs da Saga e possuem um enorme poster que contém diversas cópias do ultron junto aos heróis. Eles gostariam de saber quantos ultrons estão presentes no poster.

Ação
Faça um programa que dado uma sequência de números, retorne quantas vezes um determinado elemento se repete nesta sequência.

Entrada e Saída
Entrada:

1ª linha: Os valores de x e n, em que x é o número que corresponde ao Ultron e n a quantidade de elementos da sequência de números.

2ª linha: Os elementos da sequência de números.

Saída:

A quantidade de vezes que o elemento aparece na sequência de números.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39864
*/
#include <stdio.h>

int main(){
    
    int x = 0;
    int n = 0;
    int line = 0;
    
    
    scanf("%d %d", &x, &n);
    
    int step = 1;
    int contador = 0;
    while(step <= n){
        scanf("%d",&line);
            if(x == line){
                contador++;
        }
        
        
        
        step++;
    }
    printf("%d",contador);
    
}