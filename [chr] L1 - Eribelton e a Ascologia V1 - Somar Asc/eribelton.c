/*
Eribelton Fagundes estava passando na praça quando uma numeróloga
lhe disse: se você mudar seu nome para Erivelton Facundo, vai ficar
mais bonito, inteligente e rico.

Ele não acreditando nisso, criou sua própria ciência, a ascologia.

Na ascologia, para descobrir o poder de um nome, some o valor asc
de todos os caracteres e depois peque o resto da divisão por 50.

Quanto menor, maior é o poder ascológico de um nome.
[DS]

Exemplo:
Ana
A = 65 +
n = 110 +
a = 97
Soma => 272 % 50 => 22

Obs.: O texto de entrada termina com um '\n'.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39827
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet[100];
    scanf("%s",vet);
    int lenght = strlen(vet);
    int count = 0;
    for(int i = 0; i < lenght; i++){
        count += vet[i];
    }
    
    count = count%50;
    printf("%d",count);
}