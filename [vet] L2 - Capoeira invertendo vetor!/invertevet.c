/*
Um aluno capoeirista estava sentado quietinho no cantinho da UFC quando um amigo perguntou pra ele:

- Que foi Alfredo? Que cara de sofrimento é essa?

- To pensando nas ironias da vida. Consigo passar 5 minutos de ponta cabeça, mas não consigo inverter esse vetor.

Faça uma programa que receba os dados para serem armazenados em um vetor e Imprima os ddaos em ordem invertida.

###########################

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39849
*/

#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d",&x);
    int vet[x];
    
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);
    }
    
    for(int i = x-1; i >= 0; i--){
        printf("%d ",vet[i]);
    }
    
}