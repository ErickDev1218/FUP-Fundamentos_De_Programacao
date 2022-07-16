/*
Dado uma letra e um valor de rotação retorne a letra resultante.

Input: Primeira linha: letra minuscula entre 'a' e 'z'
Segunda linha: um valor inteiro positivo, negativo ou zero. Positivo significa um rotação pra frente, negativo
uma rotação pra trás e 0 significa permanecer no mesmo lugar.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39828
*/

#include <stdio.h>
int main(){
    char letra;
    scanf(" %c",&letra);
    int x = 0;
    scanf("%d",&x);
    int aux = 'a' - 'z';
    
    if(x > 0){
        for(int i = 0; i < x; i++){
            letra++;
            if(letra > 'z'){
                letra = 'a';
            }
        }
    }
    
    if(x < 0){
        for(int i = 0; i < -x; i++){
            letra--;
            if(letra < 'a'){
                letra = 'z';
            }
        }
    }
    
    printf("%c",letra);
}