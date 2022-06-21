/*
Atividade desenvolvida na sala de aula no dia 21/06/2022, sob orientação da professora Viviane.

Ação
Crie um vetor de caracteres
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    printf("Digite uma palavra: ");
    scanf("%s",vet);
    int tam = strlen(vet);
    printf("%s\n",vet);
    printf("Sua palavra tem %d caracteres\n",tam);
    for(int i = 0; i < tam; i++){
        printf("%c ",vet[i]);
    }

}

/*
Biblioteca <string.h>

int strleng(char s)
Para saber o tamanho do seu vetor.
*/