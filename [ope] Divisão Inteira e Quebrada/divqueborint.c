/*
Motivação
5a série do ensino fundamental. O professor me prometeu muito poder. Disse que se aprendesse sua técnica especial secreta passada apenas de geração em geração para os escolhidos, eu nunca mais teria que pensar em quociente e resto. Seria um número apenas e apenas um. Uma divisão teria dois números entrando e apenas um número saindo. Seria um sonho né? O professor só esqueceu de me avisar que agora ia ter uma tal duma vírrrrrgula e as vezes muuuuuitos números depois dela.

Ação
Aprenda a fazer divisão inteira e "quebrada".

Entrada e Saída
Entrada: Dois valores inteiros do usuário, n1 e n2, um por linha.

Saída: O resultado da divisão inteira de n1 por n2, o resto da divisão inteira e o resultado da divisão quebrada com 2 casas decimais.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39899
*/

#include <stdio.h>

int main (){
    
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int resto = 0;
    float res = 0;
    
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    resto = n1%n2;
    res = (float)n1/n2;
    n3 = n1/n2;
    
    printf("%d\n", n3);
    printf("%d\n", resto);
    printf("%.2f\n", res);
    
}