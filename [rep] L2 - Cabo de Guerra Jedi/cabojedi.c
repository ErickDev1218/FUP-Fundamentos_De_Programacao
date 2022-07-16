/*
Motivação
Na saga Star Wars, os Siths são uma ordem de guerreiros seguidores do "Lado Sombrio" da força que se opõem aos Jedis, guardiões da paz e da justiça, que dominam o "Lado da Luz" da força. Hoje, Jedis e Siths resolveram fazer um cabo de guerra. Quem irá vencer?

Ação
Você recebe uma entrada que é uma sequência com n de números inteiros positivos entre (n é sempre par).
O valor do número representa a força do participante.
A primeira metade da sequência representa os participantes do lado Jedi.
A segunda metade da sequência representa os participantes do lado Sith.
Analise a sequência somando a força dos participantes e escreva o nome  do lado que ganhou, ou empate. ("Jedi", "Sith", "Empate")

Entrada e Saída
Entrada:
1a linha: número de elementos
2a linha: sequência de números inteiros.

Saida:
"Jedi", "Sith", ou "Empate"

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39856
*/

#include <stdio.h>

int main(){
    
    int tamanho = 0;
    int line = 0;
    int control = 0;
    int sum1 = 0;
    int sum2 =0;
    
    scanf("%d",&tamanho);
    
    while(control < tamanho / 2){
        scanf("%d",&line);
        
        sum1 += line; 
        control++;
    }
    
    while(control < tamanho){
        scanf("%d",&line);
        
        sum2 += line;
        control++;
    }
    
    if(sum1>sum2){
        printf("Jedi");
    }else if(sum1<sum2){
        printf("Sith");
    }else{
        printf("Empate");
    }
}