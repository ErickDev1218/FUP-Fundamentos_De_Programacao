/*
Ação

Receba um texto (com no máximo 100 caracteres) formado por letras minúsculas, números, espaços e os caracteres (tokens) '#' e ';', que separam as frases neste texto.

Separe o texto em frases substituindo os tokens ('#' e ';') por '\n'.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39826
*/

#include <stdio.h>
int main(){
    char vet[100];
    scanf("%[^\n]",vet);
    for(int i = 0; i < 100; i++){
        if(vet[i] == '#' || vet[i] == ';'){
             vet[i] = '\n';
        }
    }
    printf("%s",vet);
}