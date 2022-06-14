/*
Dados dois vetores, verifique se o primeiro está contido no segundo.
Entrada:
1a linha: Número de elementos do primeiro vetor(1 a 50) seguido dos elementos.
2a linha: Número de elementos do segundo vetor(1 a 50) seguido dos elementos.

Saída: "sim" se o primeiro está condido no segundo e não caso contrário.

Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.

Dica: se todos os elementos de v1 existirem em v2, v1 só pode estar
contido em v2.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39844

*/


#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d ",&x);
    int vet[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);
    } // Criando o v1;

    int y = 0;
    scanf("%d ",&y);
    int v[y];
    for(int i = 0; i < y; i++){
        scanf("%d",&v[i]);
    }// Criando o v2;;
    
    int count = 0;
    
    for(int i = 0; i < x; i++){
        for(int k = 0; k < y; k++){
            if(vet[i] == v[k]){
                count++;
                break;
            }
        }
    }
    
    if(count == x){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
    
}