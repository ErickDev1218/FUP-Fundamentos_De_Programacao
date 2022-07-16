/*
Descrição
Um site sobre a série Harry Potter pediu para você criar um programa para medir o conhecimento de um visitante sobre a série e assim determinar o quão fã o visitante é.

O conhecimento do visitante deve ser medido através de 4 perguntas de múltiplas escolhas, sendo apenas uma escolha certa em cada questão.

A seguir as perguntas e a respostas:

1 - A que casa pertencia Harry Potter e seus amigos ?

1) Hufflepuff
2) Ravenclaw
3) Slytherin
4) Gryffindor [RESPOSTA CORRETA]
2 - Qual o nome verdadeiro do personagem o qual é conhecido por aquele que não deve ser nomeado ?

1) Tom Riddle [RESPOSTA CORRETA]
2) Draco Malfoy
3) Bellatrix Lestrange
4) Pedro Pettigrew
3 - Quais dessa opções não é uma Relíquia da Morte ?

1) A varinha de sabugueiro
2) A pedra da ressurreição
3) A pedra filosofal [RESPOSTA CORRETA]
4) A capa de invisibilidade
4 - O ministério da magia proibiu o uso de três feitiços, conhecidos como as maldições imperdoáveis, por ela possuírem caráter maligno e o objetivo cruel. Marque opção abaixo que não corresponde a umas das maldições imperdoáveis:

1) Crucio
2) Imperio
3) Avada Kedavra
4) Expecto Patronum [REPOSTA CORRETA]
A saída do programa vai variar com o número de acerto, da seguinte maneira:

Número de acertos	Saída do programa
0	Nunca assistiu
1	Ja ouviu falar
2	Interessado no assunto
3	Fa
4	Super fa
Entrada/Saída
Entrada: 4 números(1 2 3 4) uma por linha.
Saída: O texto correspondente ao número de acertos.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39892
*/

#include <stdio.h>
int main(){
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
    int r4 = 0;
    int res = 0;
    scanf("%d\n %d\n %d\n %d", &r1, &r2, &r3, &r4);
    if(r1 == 4){
        res+=1;
    }
    if(r2 == 1){
        res+=1;
    }
    if(r3 == 3){
        res+=1;
    }
    if(r4 == 4){
        res+=1;
    }
    
    if(res == 0){
        printf("Nunca assistiu");
    }else if(res == 1){
        printf("Ja ouviu falar");
    }else if(res == 2){
        printf("Interessado no assunto");
    }else if(res == 3){
        printf("Fa");
    }else if(res == 4){
        printf("Super fa");
    }
}