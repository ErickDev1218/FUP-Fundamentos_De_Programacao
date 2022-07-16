/*
Use o pseudocódigo a seguir para implementar o algoritmo de calcular nota e decidir se você ficou aprovado, reprovado, aprovado na final ou reprovado na final.

leia a primeira nota 
leia a segunda nota
media = some as notas e divida por 2
se media maior ou igual a 7
    aprovado
se menor que 4
    reprovado
se entre 4 e 7
    leia a final
    media_final = (media + final)/2
    se media_final >= 5
        aprovado na final
    senao
        reprovado na final
Entrada
3 notas: nota1, nota2 e nota_final, uma por linha
saida: aprovado, reprovado, aprovado na final ou reprovado na final
Obs: descarte a nota da final se ela não for necessária

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39878
*/

#include <stdio.h>

int main(){
    float n1 = 0;
    float n2 = 0;
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    float media = 0;
    media = (n1+n2)/2;
    
    if(media >= 7){
        printf("aprovado");
    }else if (media < 4){
        printf("reprovado");
    }else if (media > 4 && media < 7){
        float final = 0;
        scanf("%f",&final);
        float mediafin = (media + final)/2;
        if(mediafin >= 5){
            printf("aprovado na final");
        }else{
            printf("reprovado na final");
        }
    }
    
}