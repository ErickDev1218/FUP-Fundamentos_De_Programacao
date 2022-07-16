/*
Motivação
Para amenizar os efeitos da seca, o prefeito contratou uma quantidade Q de caminhões-pipa para abastecer uma quantidade N de casas em uma certa rua.

Nessa rua, as casas são todas vizinhas e são numeradas de 0,1,2...N-1.
Cada caminhão tem uma rota (ponto A e B) e uma quantidade de água L que deve abastecer em cada casa. Ou seja, um caminhão começa na casa A, e acrescenta  a quantidade L de água em cada casa até chegar em B (inclusive).

O prefeito quer saber exatamente como a distribuição de água está sendo feita, então ele pediu sua ajuda para relatar a quantidade de água de cada casa.

Ação
Imprima o vetor com a quantidade de água que cada casa foi abastecida.

Entrada e Saída:
Entrada:

N (quantidade de casas) e Q (quantidade de caminhões)

Nas próximas Q linhas: o ponto A, B e a quantidade inteira L de água de cada caminhão.

Saída:

Vetor com o total de água de cada casa.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39831
*/

#include <stdio.h>
int main(){
    int casas = 0;
    int caminhoes = 0;
    scanf("%d\n %d\n",&casas,&caminhoes);
    
    int vet[casas];
    for(int i = 0; i < casas; i++){
        vet[i] = 0;
    }
    
    for(int i = 0; i < caminhoes; i++){
        int A = 0;
        int B = 0;
        int L = 0;
        scanf("%d %d %d",&A,&B,&L);
        for(A; A <= B; A++){
            vet[A] += L;
        }
    }
    for(int i = 0; i < casas; i++){
        if(i+1 == casas){
            printf("%d",vet[i]);
        }else{
            printf("%d ",vet[i]);
        }
    }
}
