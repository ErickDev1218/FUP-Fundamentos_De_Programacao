/*Super Mário e Assassins Creed.

Thaiquovisqui da Silva está fazendo um joguinho
com uma mistura de Super Mário e Assassins Creed.

Nele, o Mário anda num cenário 2d, mas ao invés de pular
na cabeça dos inimigos ele mata com uma chave de fenda
no coração ou esmigalhando o crânio com uma chave inglesa.
Lembre-se que o Mário é encanador! Então isso faz todo
sentido jogabilistico.

O problema é que o cenário não ficou legal e tem alguns
locais seja altos demais que ele tem dificuldade de subir
ou baixos demais que ao cair ele morre.

Mário só consegue pular até um bloco acima do nível
atual, ou descer um bloco. Se a diferença entre os
níveis for maior que um bloco ele precisará fazer
um movimento de parkour.

Dado um cenário, calcule quantos movimentos de parkour
o Mário vai precisar para percorrer o cenário.

Um cenário é um vetor de números positivos onde o vetor
representa a altura dos blocos.

O vetor 1, 1, 3, 3, 4, 6, 4, 2, 2, 1 seria como o
seguinte cenário:

_ _ _ _ _ # _ _ _ _
_ _ _ _ _ # _ _ _ _
_ _ _ _ # # # _ _ _
_ _ # # # # # _ _ _
_ _ # # # # # # # _
# # # # # # # # # #
Nele, o Mário precisa de 4 movimentos de parkour.

[DS]

Entrada:
1a linha: a quantidade de elementos do vetor(1 a 50).
2a linha: o vetor.
Saida:
A quantidade de movimentos de parkour.


Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39843&userid=2305
*/

#include <stdio.h>
int main(){
    int x = 0;
    scanf("%d",&x);
    int vet[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&vet[i]);
    }
    
    int park = 0;
    int aux = 0;
    for(int i = 0; i < x; i++){
        if(i+1 != x){
            if(vet[i] - vet[i+1] > 1){
                park++;
            }else if(vet[i] - vet[i+1] < 0){
                aux = vet[i] - vet[i+1];
                aux *=-1;
                if(aux > 1){
                    park++;
                }
            }
        }
    }
    printf("%d",park);
}