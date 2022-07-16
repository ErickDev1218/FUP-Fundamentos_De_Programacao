/*
Amora está apaixonada e quer descobrir quantas vezes em sua cartinha de amor
aparecem palavras amorosas. Na cartinha tinha escrito:

"amo o amor que me amou, oh amora amortecida".
Ela descobriu que tinha o subtexto "amo" 5 vezes apenas nessa frase.

Ajude Amora e faça um programa que recebe duas entradas uma por linha,
a primeira linha contento o texto completo e a segunda o trecho.
Conte e escreva quantas vezes aparece o subtexto no texto maior.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39806
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    char pala[50];
    scanf(" %[^\n]",vet);
    scanf(" %[^\n]",pala);
    int numfinal = 0;
    
    for(int i = 0; vet[i]; i++){
        int cont = 0;
        for(int j = 0; pala[j];j++){
            if(i+j < strlen(vet) && pala[j] == vet[i+j]){
                cont++;
            }
        }
        if(cont == strlen(pala)){
           numfinal++; 
        }
    }
    printf("%d",numfinal);
}