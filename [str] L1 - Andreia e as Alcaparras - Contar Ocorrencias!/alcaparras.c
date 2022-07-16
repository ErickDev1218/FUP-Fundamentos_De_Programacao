/*
Faça um programa que conta quantas vezes um caractere aparece numa frase. Conte apenas os caracteres exatos (distinguindo letras maiúsculas e letras minúsculas). Cada frase tem até 100 char.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39816
*/
#include <stdio.h>
#include <string.h>

int main(){
    char vet[100];
    scanf("%[^\n]",vet);
    
    char letra;
    scanf(" %c",&letra);
    
    int contador = 0;
    
    int lenght = strlen(vet);
    
    for(int i = 0; i < lenght; i++){
        if(vet[i] == letra){
            contador++;
        }
    }
    printf("%d",contador);
}