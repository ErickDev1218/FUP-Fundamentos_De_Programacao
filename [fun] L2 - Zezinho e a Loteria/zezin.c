/*
### Motivação
Se Zezinho não ganhar na loteria esse ano, todos os seus planos vão ficar comprometidos.
Zezinho quer saber quantos resultados possíveis existem para o prêmio da loteria.
Ele contratou você para fazer um programa que responda isso. Disse que quando ganhar o prêmio, ele vai pagar.

Você sabe que a quantidade de resultados distintos do jogo da loteria pode ser calculada com a combinação,
que calcula quantos agrupamentos possíveis podem ser formados
com 6 números entre os números de 1 a 60.

### Descrição

Calcule a combinação de n elementos tomados k a k, usando a seguinte fórmula:
C(n,k) = n!/(k! * (n-k)!)

Para isso, você deverá implementar:
- A função fatorial(n) que recebe um número inteiro n e retorna um número inteiro que é o fatorial de n;
- A função combinacao(n,k) que recebe dois números inteiros n e k e retorna um número inteiro que é a combinação de n elementos tomados k a k.
- A função main que recebe os valores do usuário, chama a função combinação e imprime o resultado na tela.

*Dica*: chame a função fatorial para ajudar nos cálculos da função combinação.

### Entrada/Saída

Entrada:
* linha 1: O valor de n
* linha 2: O valor de k

Saída:
A combinação de n elementos tomados k a k.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=41614
*/

#include <stdio.h>
int fatorial(int n){
    int fat = n;
    if(n==1){
        return 1;
    }
    while(n>1){
        fat = fat*(n-1);
        n--;
    }
    return fat;
}


int combinacao(int n, int k){

    int fatN = fatorial(n);
    int fatK = fatorial(k);
    int aux = n-k;
    int fatNK = fatorial(aux);
    int res = fatN/(fatK*fatNK);
    return res;
}


int main(){
    int n =0;
    int k =0;
    scanf("%d\n %d",&n,&k);

    int rf = combinacao(n,k);
    printf("%d",rf);
}