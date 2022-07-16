/*
Motivação
Chico deseja coletar todas as frutas do quintal vizinho. Porém, sem que seu vizinho o veja.
Para isso, Chico precisa saber exatamente quanto tempo ele irá gastar na coleta.
Sabendo que você é um programador, Chico pediu sua ajuda nessa missão furtiva. 

Há três tipos de frutas no quintal: bananas, goiabas e mangas.
Chico tem uma cesta que pode carregar até C frutas.
Ele gasta exatamente 1 minuto para ir ao quintal vizinho, encher a cesta e voltar.

Ação
Dada a capacidade C da cesta, a quantidade de frutas, calcule quantos minutos Chico precisará para coleta.
Você pode considerar que há pelo menos uma fruta antes da coleta.

Entrada e Saída:
Entrada:

Capacidade da cesta.
Quantidade de bananas.
Quantidade de goiabas.
Quantidade de mangas.
Saída:

Duração da coleta em minutos.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39879
*/

#include <stdio.h>

int main () {
    int c =0,ban=0,goi=0,man=0;
    
    scanf("%d",&c);
    scanf("%d",&ban);
    scanf("%d",&goi);
    scanf("%d",&man);
    
    int med = (ban+goi+man);
    
    // 1 minuto para encher a cesta e sair
    
    if(c > med){
        printf("1");
    }else if(med%c==0){
        printf("%d",med/c);
    }
    else if(c < med){
        med /=c;
        med++;
        printf("%d",med);
    }
}