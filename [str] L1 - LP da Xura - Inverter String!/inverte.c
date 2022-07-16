/*
ra on odnalor at acopip ed oriehc a acopip.

Que marmota é essa que você tá fazendo com meu LP da Xuxa menino?!

Mamãe, é que eu ví na internet que se tocarmos as músicas da Xuxa ao contrário saem umas mensagens sinistras!

Ajude Carlinhos a testar essa teoria. Dado uma string, imprima a mesma string ao contrário.

Cada frase tem até 100 char.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39818&userid=2305
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    scanf("%[^\n]",vet);
    
    int lenght = strlen(vet);
    
    for(int i = lenght -1; i >= 0; i--){
        printf("%c",vet[i]);
    }
}