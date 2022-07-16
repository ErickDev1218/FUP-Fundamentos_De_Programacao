/* 
Dado um texto(max 100 char) mostre o texto com o case invertido: o que for letra minúscula, imprima em maiúsculo e vice versa.

Números e pontuação deixe inalterado.

Exemplo:
>>O ovomaltine e GOSTOSO
<<o OVOMALTINE E gostoso

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39812
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    scanf("%[^\n]",vet);
    
    int trade = 'a' - 'A';
    
    int lenght = strlen(vet);
    
    for(int i = 0; i < lenght; i++){
        if(vet[i] >= 'a' && vet[i] <= 'z'){
            vet[i] -= trade;
        }else if(vet[i] >= 'A' && vet[i] <= 'Z'){
            vet[i] += trade;
        }
        printf("%c",vet[i]);
    }
}