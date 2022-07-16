/*
Faça um programa que receba uma frase(max 100 char) e imprima a
mesma frase com as palavras repetidas. A entrada é composta
apenas de minúsculas e espaços. Não existem espaços no começo
ou no final da entrada. Não aparecem dois espaços juntos.

Quando terminar essa questão, talvez queira tentar a Nao se bububula nas questões de string.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39815
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    scanf("%[^\n]",vet);
    char pala[100];
    int k = 0;
    
    for(int i = 0; i < strlen(vet); i++){
        pala[i] = vet[i];
        if(vet[i] == ' '){
            pala[k] == '\0';
            printf("%s%s",pala,pala);
            k = 0;
        }
        
        
    }
    
}