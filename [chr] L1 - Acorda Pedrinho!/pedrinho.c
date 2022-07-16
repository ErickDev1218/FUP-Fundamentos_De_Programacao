/*
Sexta série é fogo. Pedrinho já repetiu 8 vezes a tarefinha de português  e ainda não entendeu. "Tarefinha fácil" disse a tia. 
Mas quem precisa decorar fórmulas quando se sabe programar?

Entrada: um caracter
Saida: Se for uma letra maiúscula, imprima a letra minúscula.
           Se for uma letra minúscula, imprima a letra maiúscula.
           Se ele for qualquer outro caractere, imprima ele mesmo.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39825
*/

#include <stdio.h>
int main(){
    char val = ' ';
    scanf("%c",&val);
    int calc = 'a' - 'A';
    if(val >= 'a' && val <= 'z'){ // Minusc p/ maiusc.
        val -= calc;
        printf("%c\n",val);
    }else if(val >= 'A' && val <= 'Z'){ // Maiusc p/ minusc.
        val += calc;
        printf("%c\n",val);
    }else{
        printf("%c",val);
    }
}