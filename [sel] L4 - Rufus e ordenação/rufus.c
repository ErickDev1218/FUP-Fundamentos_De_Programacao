/*
Rufus precisa procriar a especie para passar seus genes valiosos.
Rufus tem muitos filhinhos e os ama tanto que não consegue compará-los.
- Papai, eu sou maior que o Rufus Junior Terceiro não sou?? Perguntou Rufus Júnior Quadragésimo novo.
 
Ajude Rufus com isso. Dados os tamanhos em cm de 3 Rufinhos, informe qual o maior(G) o menor(P) e o do meio(M). Os valores nunca serão iguais.

I/O
Entrada:

três valores inteiros, representando a altura em cm dos Rufinhos.

Saída: 

"P M G"; "P G M", "G P M"; "M P G"; "M G P" ou "G M P", dependendo dos valores de entrada. 

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39874
*/
#include <stdio.h>

int main (){
    
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    if(n1 > n2 && n1 > n3 && n2 > n3){
        printf("G M P");
    }
    else if(n1 > n2 && n1 > n3 && n2 < n3){
        printf("G P M");
    }
    else if((n2 > n1 && n2 > n3) && n1 > n3){
        printf("M G P");
    }
    else if(n2 > n1 && n2 > n3 && n1 > n3){
        printf("M P G");
    }
    else if (n2 > n1 && n2 > n3 && n1 < n3){
        printf("P G M");
    }
    else if(n1 < n2 && n2 < n3){
        printf("P M G");
    }else{
        printf("M P G");
    }
}