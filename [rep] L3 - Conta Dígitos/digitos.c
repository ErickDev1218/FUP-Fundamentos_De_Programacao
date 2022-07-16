/*
Joãozinho passou o dia visualizando os seus contatos no celular.
Logo ele decidiu fazer um programa que calcula a quantidade de vezes que um determinado dígito aparece em um número de contato.
Após passar uma semana tentando, ele repassou esse problema para você.

I/0
Entrada:
Receba dois inteiros do usuário o primeiro sendo o dígito que se quer saber quantas vezes aparece, e o segundo sendo o número do contato (8 dígitos).

Saída:
Quantas vezes o número escolhido se repete.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39862
*/

#include <stdio.h>
int main(){
    int find = 0;
    scanf("%d",&find);
    int num = 0;
    scanf("%d",&num);
    int res = 0;
    int k = 0;
    
    while(num >1){
        k = num%10;
        if(k == find){
            res++;
        }
        num/=10;
    }
    printf("%d",res);

}