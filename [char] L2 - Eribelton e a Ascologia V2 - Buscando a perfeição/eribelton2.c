/*
Na ascologia, para descobrir o poder de um nome, some o valor asc de todos os caracteres e depois efetue a operação do resto da divisão por 50.

Seu objetivo é mudar o nome da pessoa para tentar encontrar o valor ascológico perfeito 0.

Para isso a única modificação que você pode fazer no nome é adicionar uma letra minúscula ao 
final da palavra. Apenas um. Se não existir nenhuma letra que, quando adicionada, coloque o valor em 0, escreva "sem sorte"

Entrada: Uma palavra apenas com minúsculos e maiúsculos sem espaços (1 a 30 chars).

Saída: o caractere inserido no final do nome, ou "sem sorte"

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39822
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    scanf("%s",vet);
    
    int lenght = strlen(vet);
    int contador = 0;
    for(int i = 0; i < lenght; i++){
        contador += vet[i];
    }
    int control = 0;
    for(int i = 'a'; i <= 'z'; i++){
        if((contador+i)%50 == 0){
            printf("%c",i);
            control++;
            break;
        }
    }
    
    if(control == 0){
        printf("sem sorte\n");
    }
}