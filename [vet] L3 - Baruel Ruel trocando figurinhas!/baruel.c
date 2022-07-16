/*Entrada:
A entrada é composta da quantidade de figurinhas no álbum e da lista de figurinhas de Baruel de forma ORDENADA. A saída deve ser uma linha contendo as figurinhas repetidas e os números da figurinhas que faltam. Se não houver figurinhas repetidas ou não faltar nenhuma escreva 'N'.

Ex:
Entrada:
linha 1: quantidade de figurinha total do album(1 a 50)
linha 2: quantidade de figurinhas que Baruel possui (no minimo 1a)(0 a 100)
linha 3: números das figurinhas de forma ORDENADA.

Saída:
linha 1: as figuras que ele tem pra trocar ou 'N' se nenhuma
linha 2: os números das figuras que faltam ou 'N' se nenhuma



Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39842&userid=2305
*/

#include <stdio.h>
int main(){
    int quant_tem = 0;
    scanf("%d",&quant_tem);//Quantidades total.
    
    int x = 0;
    scanf("%d",&x);//Tamanho do vetor.
    
    int vet[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);//Colocando valores no vet.
    }
    int igual = 0;
    for(int i = 0; i < x; i++){
        if(i+1 != x){
            if(vet[i] == vet[i+1]){
                printf("%d ",vet[i]);
                igual++;
            }
        }
    }
    if(igual == 0){
        printf("N\n");
    }else{
        printf("\n");
    }
    
    int falta = 0;
    int aux = 0;
    for(int i = 1; i <= quant_tem; i++){
        falta = 0;
        for(int k = 0; k < x; k++){
            if(vet[k] == i){
                falta = 1;
            }
        }
        if(falta == 0){
            printf("%d ",i);
            aux++;
        }
    }
    if(aux == 0){
        printf("N\n");
    }
    
}