/*
Major General Brigadeiro Pretinho quer separar os pequenos soldados dos grandes soldados. Depois de discutir com o Cabo Tigre qual o conceito de pequeno e grande, eles chegaram a uma conclusão favorável:

- Primeiro, precisam calcular a média de altura dos soldados.

- Pequenos são todos os soldados menores que a média.

- Grandes são todos os soldados maiores que a média.

Entrada:

O primeiro valor é inteiro N (1 a 50) e define quantos soldados existem. Depois segue-se N valores 'float' correspondente às alturas dos soldados. Imprima a média com dois dígitos na primeira linha e na segunda linha para cada soldado, imprima respectivamente 'P' se o soldado for pequeno, 'G' se for grande e 'M' se ele for exatamente igual à média.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39845
*/

#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d",&x);
    double vet[x];
    double med = 0;
    for(int i = 0; i < x; i++){
        scanf("%lf",&vet[i]);
    }
    for(int i = 0; i < x; i++){
        med+=vet[i];
    }
    med = med/x;
    printf("%.2lf\n",med);
    
    for(int i = 0; i < x; i++){
        if(vet[i] > med){
            printf("G ");
        }else if (vet[i] < med){
            printf("P ");
        }else{
            printf("M ");
        }
    }
    
    
}