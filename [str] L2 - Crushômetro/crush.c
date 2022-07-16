/*
Depois de muitos Spotteds-VSF de amor, um aluno fez um estudo e anotou essas características para calcular a compatibilidade entre você e o crush:

Se a primeira letra do nome for igual, ganha 20 pontos;

Se tiver a mesma quantidade de letras nos nomes, ganha 30 pontos;

Se tiver a mesma quantidade de vogais, ganha 30 pontos;

Se ambos terminarem em vogal ou consoante, ganha 20 pontos.

Se os nomes terminarem um em vogal e outro em consoante, perde 10 pontos;

Devolva a porcentagem de chances do crush funcionar com você (Lembrando que porcentagens não podem ser negativas!).

 

Observação:
Para fazer o cálculo, some todos os pontos e imprima da seguinte forma:

"As chances do crush te dar bola sao: 100%!"

para imprimir o '%', basta coloca-lo duas vezes, assim:

printf("%%");

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39787
*/

#include <stdio.h>
#include <string.h>
int main(){
    char vet1[50];
    scanf("%s",vet1);
    char vet2[50];
    scanf("%s",vet2);
    
    int lenght1 = strlen(vet1);
    int lenght2 = strlen(vet2);
    
    int contador = 0;
    
    if(vet1[0] == vet2[0]){
        contador += 20;
    }
    if(lenght1 == lenght2){
        contador += 30;
    }
    
    int quantvog1 = 0;
    for(int i = 0; i < lenght1; i++){
        if((vet1[i] == 'a' || vet1[i] == 'e' || vet1[i] == 'i' || vet1[i] == 'o' || vet1[i] == 'u' || vet1[i] == 'A' || vet1[i] == 'E' || vet1[i] == 'I' || vet1[i] == 'O' || vet1[i] =='U') && vet1[i] != ' '){
            quantvog1++;
        }
    }
    
    int quantvog2 = 0;
    for(int i = 0; i < lenght2; i++){
        if((vet2[i] == 'a' || vet2[i] == 'e' || vet2[i] == 'i' || vet2[i] == 'o' || vet2[i] == 'u' || vet2[i] == 'A' || vet2[i] == 'E' || vet2[i] == 'I' || vet2[i] == 'O' || vet2[i] =='U') && vet2[i] != ' '){
            quantvog2++;
        }
    }
    
    if(quantvog1 == quantvog2){
        contador += 30;
    }
    
    int controlevog = 0;
    int controlecons = 0;
    if((vet1[lenght1-1] == 'a' || vet1[lenght1-1] == 'e' || vet1[lenght1-1] == 'i' || vet1[lenght1-1] == 'o' || vet1[lenght1-1] == 'u' || vet1[lenght1-1] == 'A' || vet1[lenght1-1] == 'E' || vet1[lenght1-1] == 'I' || vet1[lenght1-1] == 'O' || vet1[lenght1-1] == 'U') && (vet2[lenght2-1] == 'a' || vet2[lenght2-1] == 'e' || vet2[lenght2-1] == 'i' || vet2[lenght2-1] == 'o' || vet2[lenght2-1] == 'u' || vet2[lenght2-1] == 'A' || vet2[lenght2-1] == 'E' || vet2[lenght2-1] == 'I' || vet2[lenght2-1] == 'O' || vet2[lenght2-1] == 'U')){
        controlevog++;
    }else if((vet1[lenght1-1] != 'a' && vet1[lenght1-1] != 'e' && vet1[lenght1-1] != 'i' && vet1[lenght1-1] != 'o' && vet1[lenght1-1] != 'u' && vet1[lenght1-1] != 'A' && vet1[lenght1-1] != 'E' && vet1[lenght1-1] != 'I' && vet1[lenght1-1] != 'O' && vet1[lenght1-1] != 'U') && (vet2[lenght2-1] != 'a' && vet2[lenght2-1] != 'e' && vet2[lenght2-1] != 'i' && vet2[lenght2-1] != 'o' && vet2[lenght2-1] != 'u' && vet2[lenght2-1] != 'A' && vet2[lenght2-1] != 'E' && vet2[lenght2-1] != 'I' && vet2[lenght2-1] != 'O' && vet2[lenght2-1] != 'U')){
        controlecons++;
    }
    
    if(controlevog == 1){
        contador += 20;
    }else if(controlecons == 1){
        contador += 20;
    }else{
        contador -= 10;
    }
    if(contador < 0){
        contador = 0;
    }
    
    printf("As chances do crush te dar bola sao: %d%%!",contador);
}