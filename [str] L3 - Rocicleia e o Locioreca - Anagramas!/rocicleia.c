/*
Sabia que o seu nome e o meu são um anagrama? Disse Rocicleia para Licioreca.
Licioroca não sabia português, mas sabia programar. Ajude Licioroca a fazer um
código que informa se duas palavras são anagramas.

Uma palavra é anagrama de outra se é formada pelas mesmas letras
nas mesmas QUANTIDADES, mas em qualquer ordem.
Dadas duas palavras, imprima sim se elas são anagramas e não se não sao anagramas.

[DS]

Regras:
A entrada são duas palavras, uma por linha, apenas caracteres minusculos e sem espaços.
A saida deve ser apenas "sim" ou "nao"

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39807
*/

#include <stdio.h>
#include <string.h>

int contarChar(char str[],char let){
    int contador = 0;
    for(int i = 0; i < strlen(str); i++){
        if(let == str[i]){
            contador++;
        }
    }
    return contador;
}

int main(){
    char vet[100];
    char anag[100];
    scanf("%s\n %s",vet,anag);
    if(strlen(vet) != strlen(anag)){
        printf("nao\n");
        return 0;
    }
    for(int i = 0; i < strlen(vet); i++){
        if(contarChar(vet,vet[i]) != contarChar(anag,vet[i])){
            printf("nao\n");
            return 0;
        }
    }
    printf("sim\n");
}