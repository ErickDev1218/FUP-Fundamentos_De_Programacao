/*
Motivação
A mãe de João entrou em seu quarto e ficou furiosa por causa da bagunça. Ela deu um grito bem alto e acordou o coitado do João que estava no terceiro sono. Ele sonhando que estava contando as ovelhas que conseguiam pular a cerca da fazenda de seu pai, mas no sonho, ele só conseguia contar de 60 em 60.

Após cair da cama, sua mãe lhe disse que se ele não se levantasse em um segundo e arrumasse seu quarto ficaria de castigo até o próximo ano bissexto, primo e quadrado perfeito.

Ação
Faça um programa para calcular em qual hora, minuto e segundo João deve ter que terminar de arrumar seu quarto. 

Entrada e Saída
Entrada

Três inteiros, hora, minuto e segundo inicial em uma linha (representando o momento inicial da arrumação).
Saída:

Hora, minuto e segundo final e uma linha (representando o momento final da arrumação).

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39877
*/

#include <stdio.h>

int main(){
    
    // Variáveis
    int hr = 0;
    int min = 0;
    int seg = 0;
    
    // Scans
    scanf("%d",&hr);
    scanf("%d",&min);
    scanf("%d",&seg);
    
    seg+=1;
    
    // Lógica
    if(seg < 60 && min < 59){
         printf("%d %d %02d",hr,min,seg);
    }
    
    else if (seg == 60 && min < 59){
        seg=0;
        min+=1;
        printf("%d %d %02d",hr,min,seg);
    }
    
    else if (seg == 60 && (min+=1 == 60) && hr != 23){
        seg=0;
        min=0;
        hr+=1;
        printf("%d %02d %02d",hr,min,seg);
    }
    
    else if(seg == 60 && (min+=1 == 60) && (hr+=1 == 24)){
        seg=0;
        min=0;
        hr=0;
        printf("%02d %02d %02d",hr,min,seg);
    }else{
        printf("Algo deu errado.");
    }
}