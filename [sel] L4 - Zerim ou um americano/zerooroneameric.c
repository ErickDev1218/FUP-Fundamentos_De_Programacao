/*
Motivação
Chico: Time de fora é meu.
Alberto: Eu cheguei primeiro.
Chico: Minhas ventas.
Francisco e Elias: Nós tamo aqui bando de cego, tamo esperando também.
Ruan: Bora bando de lezado, vagou aqui, qual dos 4 entra no jogo?
Chico: Bora rápido, zerim ou 1.
Alberto: Ei moi de chifre, zerim ou um só funciona direito com com 3, bora logo o americano.
Ação
No zerim ou um americano cada participante coloca quantos dedos quiser na roda. Um dos participantes soma os dedos e aponta para cada participante enquanto conta. Ganha aquele que estiver sendo apontado no momento que a contagem coincidir com a soma dos dedos.
Suponha que existem 4 jogadores. O contador, o jogador 1, aponta pra cima e diz "zero", e então aponta pra si mesmo e diz "um", aponta pro jogador 2 e diz "dois", pro jogador 3 e diz "três", pro jogador 4 e diz "quatro", volta a apontar pra si e diz "cinco" e assim sucessivamente até a contagem atingir o total de dedos.
Entrada e Saída
Entrada: Os números dos 4 jogadores, um por linha.
Saída: jog1, jog2, jog3, jog4, ou "nenhum" se a soma deu 0.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39880
*/
#include <stdio.h>

int main(){
    int jog1=0, jog2=0,jog3=0,jog4=0;
    
    scanf("%d", &jog1);
    scanf("%d", &jog2);
    scanf("%d", &jog3);
    scanf("%d", &jog4);
    
    int res = (jog1+jog2+jog3+jog4)%4;
    
    if(jog1 == jog2 && jog2 == jog3 && jog3==jog4 && jog1!=0){
        printf("jog4");
    }else if(res == 1){
        printf("jog1");
        
    }else if(res == 2){
        printf("jog2");
    }else if(res == 3){
        printf("jog3");
    }else if(res == 4){
        printf("jog4");
    }else if(res == 0){
        printf("nenhum");
    }
}