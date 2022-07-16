/*cvccvccv!

Que marmota é essa Pedrinho? Disse Reumario Albrito!

cvvcvcvv vcccvcv!

O que é vcvcvcvcvc?!

É uma brincadeira Reumario! Eu pego uma frase e onde é vogal eu coloco v, onde é consoante eu coloco c. Onde é espaço eu ponho espaço. Então cvccvccv é o meu nome e cvvcvcvv ccccvcv o seu.
#####

Faça um programa que dada uma frase de entrada (max 50 char), imprime a codificação de Pedrinho.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39814
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[50];
    scanf("%[^\n]",vet);
    
    int lenght = strlen(vet);
    
    for(int i = 0; i < lenght; i++){
        if(vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u' || vet[i] == 'A' || vet[i] == 'E' || vet[i] == 'I' || vet[i] == 'O' || vet[i] =='U'){
            vet[i] = 'v';
        }else if(vet[i] == ' '){
            vet[i] = ' ';
        }
        else{
            vet[i] = 'c';
        }
    }

    for(int i = 0; i < lenght; i++){
        printf("%c",vet[i]);
    }
}