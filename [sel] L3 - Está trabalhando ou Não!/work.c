/*
Descrição
Um funcionário trabalha de segunda a sexta, de 8 até 11:59 e de 14 até 17:59. Às 17:59 é pra ele ainda estar trabalhando! No sábado ele trabalha apenas de 8 até 11:59.

O chefe cansou de tentar decorar isso tudo e deu 15 contos pra você fazer um código que lê o dia da semana, a hora e o minuto e informa ao chefe se ainda é para o funcionário estar trabalhando!

IO
A entrada é formada por um número inteiro representando o dia da semana:

(1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB)

e mais dois inteiros representando hora e minuto, um por linha.

A saída dever ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.

Link -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39885
*/

#include <stdio.h>

int main(){
    
    int wd = 0;
    int hour = 0;
    int min = 0;
    
    scanf("%d",&wd);
    scanf("%d",&hour);
    scanf("%d",&min);
    
    if(wd == 1){
      printf("NAO");
      // Trabalhando domingo é NÃO!
      }
      
      else if(wd == 7 && (hour >= 12 || hour < 8)){
        printf("NAO");
        // Trabalhando ao sábado depois das 12h e antes das 8h é NÃO!
    }
    
    else if(wd <= 6 && wd > 1){
        // De segunda à sexta!
        
        //Antes das 8h, depois das 18h ou às 12h é NÃO!
        if((hour >= 18 || hour < 8  || hour == 12)){
            printf("NAO");
        }
        
        // Entre as 8h e 12h é SIM e entre as 14 as 17:59 é SIM!
        else if(hour < 12 || hour >= 14){
            printf("SIM");
        }
    }else{
        printf("SIM");
    }
    
}