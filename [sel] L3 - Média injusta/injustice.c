/*
Ação
Faça um programa que receba as notas das três provas e do trabalho e calcule a media final do aluno. Se a média for maior ou igual a 7, o programa deve avisar que o aluno foi aprovado. Caso contrário o programa deve avisar que o aluno vai para a prova final.

A ordem da entrada é importante nessa questão. As três primeira entradas são as notas da prova.

I/O
Entrada:
três notas de prova como inteiro e uma nota de trabalho, um por linha.

Saída:
"Aprovado com <nota>" ou "Final com <nota>", em que <nota> é o valor da média injusta.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=40457
*/

#include <stdio.h>

int main(){
    
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    
    int media = 0;
    
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    

    if(n1 >= n2 && n1 >= n3 && n1 >= n4){
        media = n1 + n2 + n4;
        
        media /= 3;
        
        
    }else if(n1 >=n2 && n1 >= n3 && n4 >=n2){
        media = n1 + n3 + n4;
        
        media /= 3;
        
        
        
    }else if(n2 >= n1 && n2 >= n3 && n4 >= n1 ){
        media = n2 + n3 + n4;
        
        media /=3;
        
        
    }else{
        media = n1 + n2 + n3;
        
        media /=3;
    }
    
    
    
    // Casos da média!
    if(media >= 7){
        printf("Aprovado com %d",media);
    }else{
        printf("Final com %d",media);
    }
}