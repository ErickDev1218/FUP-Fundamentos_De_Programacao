/*
Motivação
Na disciplina do professor bonzinho os alunos irão fazer 3 provas e 1 trabalho. Como o professor é muito legal, a nota mais baixa das provas será descartada.

A média é formada pelas soma das
duas melhores notas de prova
mais a nota do trabalho divido por 3.

Ação
Faça um programa que receba as notas das três provas e do trabalho e calcule a media final do aluno. Se a média for maior ou igual a 7, o programa deve avisar que o aluno foi aprovado. Caso contrário o programa deve avisar que o aluno vai para a prova final.

A ordem da entrada é importante nessa questão. As três primeira entradas são as notas da prova.

I/O
Entrada
três notas de prova como float e uma nota de trabalho, um por linha.

Saída
"Aprovado com $nota" ou "Final com $nota" onde nota é o valor da nota
com uma casa decimal.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39873
*/

#include <stdio.h>

int main(){
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float trab = 0;
    int count = 3;
    
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&trab);
    
    float menor = n1;
    if(n2 < menor){
        menor = n2;
    }
    if(n3 < menor){
        menor = n3;
    }
    
    float media = (n1 + n2 + n3);
    media -= menor;
    media +=trab;
    media = media/3;

    if(media >= 7){
        printf("Aprovado com %.1f",media);
    }else{
        printf("Final com %.1f",media);
    }
    
}