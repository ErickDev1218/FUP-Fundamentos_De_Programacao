/*
Leia o valor da soma dos dedos dos três irmãos D1, D2, D3  e diga qual a letra L que será utilizada no jogo.
Entrada: o valor de D1+D2+D3
Saída: A letra correspondente ou "Joguem de novo" se ninguém colocou nenhum dedo.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39824
*/

#include <stdio.h>
int main(){
    int dedo = 0;
    scanf("%d",&dedo);
    if((dedo < 0 && dedo > 100) || dedo == 0){
        printf("joguem de novo\n");
        return 0;
    }
    char letra = 'a'-1;
    for(int i = 0; i < dedo; i++){
        letra++;
        if(letra > 'z'){
            letra='a';
        }
    }
    printf("%c",letra);
}