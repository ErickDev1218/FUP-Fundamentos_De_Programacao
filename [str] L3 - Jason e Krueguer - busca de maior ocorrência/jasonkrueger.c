/* 
- As pessoas perderam a fé na sexta feira 13. Diz Jason
por trás da máscara.
- A vida tá ficando difícil mesmo. Fala Freddy Krueguer
com o dedo enfiado numa nota de 50.
- O jeito é estudar pra concurso então.
- Mas pra onde a gente vai?
- Ouví falar de um canto que paga muito bem, não precisa
de qualificação nenhuma e só tem gente assustadora.
- Qual cargo?
- 12.800 mil pra motorista, graçom e assensorista lá
no tribunal de contas em Brasília.
- Boa, vamos lá.

Algum tempo depois...

- Duas vogais juntas é o que? Fala Jason.
- Ditongo!!! Grita Freddy.
- Ieie, pegadinha do malandro Kruguinho:
Caiu na casca de banana: vogais juntas são um encontro vocálico,
que pode ser ditongo ou hiato, dependendo se estão ou não na mesma
sílaba.

[DS]

#########################

Entrada:
1a linha: a quantidade de casos de teste(1 a 50).
Uma linha por caso de teste contendo uma frase de até 50
caracteres, apenas com minuscula.
Saida:
Para cada caso de teste retorne uma linha contendo o subtexto
com a maior quantidade de vogais juntas.
Se existir empate, retorne o que aparece primeiro no texto.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39800
*/

#include <stdio.h>
int main(){
    char vet[100];
    int n = 0;
    scanf("%d",&n);
    
    
    for(int j = 0; j < n; j++){
        scanf("%s",vet);
        int contador = 0;
        int maior = 0;
        
        for(int i = 0; vet[i]; i++){
            if(vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u'){
                contador++;
                if(contador > maior){
                    maior = contador;
                }
            }else{
                    contador = 0;
            }
        }    
    
        contador = 0;
        for(int i = 0; vet[i]; i++){
            if(vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u'){
                contador++;
                if(contador == maior){
                    for(int k = i - maior+1;k <= i; k++){
                        printf("%c",vet[k]);
                    }
                    break;
                }
            }else{
                contador = 0;
            }
        }
            printf("\n");
    }
}