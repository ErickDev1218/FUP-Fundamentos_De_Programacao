/*
### Descrição
Rufus (minha tartaruga cibernética) quer entrar no campeonato de par ou impar entre tartarugas.

Implemente o par ou impar no processador de RUFUS para que ele possa participar do campeonato mundial de par ou impar e trazer o prêmio pra UFC.

### Entrada/Saída

Entrada:
* linha 1: A opção do jogador1 (0 para par e 1 para impar)
* linha 2: o número de dedos do primeiro jogador
* linha 3: número de dedos do segundo jogador.

Saída:
* "Venceu" se o jogador 1 venceu e "Perdeu" se ele perdeu.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39887
*/

#include <stdio.h>

int main(){
    int op = 0;
    int d1 = 0;
    int d2 = 0;
    scanf("%d\n %d\n %d",&op,&d1,&d2);
    
    int res = d1+d2;
    
    if(res%2==0 && op==0){
        printf("Venceu");
    }else if(res%2!=0 && op==1){
        printf("Venceu");
    }else{
        printf("Perdeu");
    }
}