/*
Dada uma frase (max 100 char) com palavras (letras minúsculas), números e espaço some todos os números que encontrar. Numa palavra existem apenas números ou apenas alfabéticos. Palavras são separadas por 1 espaço.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39821
*/

#include <stdio.h>
int main(){
    char letra = ' ';
    int aux1 = 0;
    int somatorio = 0;
    
    for(int i = 0; i < 100; i++){
        if(letra != '\0'){
            scanf("%c",&letra);
            if(letra >= '0' && letra <= '9'){
                aux1 = aux1 * 10 + (letra - '0'); //Transformando o valor de asc p int
            }else{
                somatorio += aux1;
                aux1 = 0;
            }
        }
    }
    printf("%d",somatorio);
    
}