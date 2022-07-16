/*
Faça um código que simule o comportamento do jogo da forca.
Voce recebe como parâmetro a palavra real e todos as letras que
já foram chutadas pelo participante e deve retornar a palavra cifrada
a ser apresentada pelo programa. Todas as letras do chute são minúsculas.

Nas letras não acertadas ainda, voce deve colocar o caractere marcador 
passado por parametro. Se nas palavras houver pontuação ou espaço,
voce deve imprimi-los corretametente. Se a letra for maiuscula,
voce deve imprimir maiuscula.

Ex: palavra , chutes , marcador -> saida
Ex: "Abacaxi" , "axnpqe" , '-' -> "A-a-ax-"
Ex: "extraordinario", "aeioubcdfgh" , '*' -> "e***ao*di*a*io"
Ex: "Teco-Teco!" , "tbxyan" , '_' -> "T___-T___!"

Entrada: 3 linhas, a frase (max 100 char), os chutes (max 26 char) e o caractere de marcação (1 char).

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39799
*/

#include <stdio.h>
int main(){
    char palavra[100];
    char chute[100];
    char marcador = ' ';
    
    
    scanf("%[^\n]",palavra);
    scanf("%s",chute);
    scanf(" %c",&marcador);
    int aux = 'a' - 'A';
    for(int i = 0; palavra[i]; i++){
        if((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z')){
            int control = 0;
            for(int k = 0; chute[k]; k++){
                if(palavra[i] == chute[k] || palavra[i]+aux == chute[k]){
                    control = 1;
                }
            }
            if(control == 0){
                palavra[i] = marcador;
            }
        }
    }
    printf("%s",palavra);
}