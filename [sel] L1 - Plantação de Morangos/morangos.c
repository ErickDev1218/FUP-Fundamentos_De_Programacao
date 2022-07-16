/*
Motivação
Os administradores da Fazenda Fartura planejam criar uma nova plantação de morangos, no formato retangular. Eles têm vários locais possíveis para a nova plantação, com diferentes dimensões de comprimento e largura. Para os administradores, o melhor local é aquele que tem a maior área. Eles gostariam de ter um programa de computador que, dadas as dimensões de dois locais, determina o que tem maior área. Você pode ajudá-los?

Entrada
A entrada contém quatro linhas, cada uma contendo um número inteiro. As duas primeiras linhas indicam as dimensões (comprimento e largura) de um dos possíveis locais. As duas últimas linhas indicam as dimensões (comprimento e largura) de um outro possível local para a plantação de morangos. As dimensões são dadas em metros.
Saída
Seu programa deve escrever uma linha contendo um único inteiro, a área, em metros quadrados, do melhor local para a plantação, entre os dois locais dados na entrada.
Restrições
1 ≤ comprimento ≤ 100
1 ≤ largura ≤ 100

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=41623
*/

#include <stdio.h>

int main(){
    
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    scanf("%d\n %d\n %d\n %d",&x1,&y1,&x2,&y2);
    
    int res1 = x1*y1;
    int res2 = x2*y2;
    
    if(res1>res2){
        printf("%d\n",res1);
    }else{
        printf("%d\n",res2);
    }
    
}