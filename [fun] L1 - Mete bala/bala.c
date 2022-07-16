/*
Motivação
Um atirador de elite estava atirando a 400 metros de distância em em um papel milimetrado.
Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles.
Como ele não tinha régua, ele pegou os pontos no plano cartesiano e a fórmula
da distância entre os pontos para poder calcular a distância.

Ação
Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto,
imprima a distância entre os pontos com duas casas decimais.

Entrada e Saída:
Entrada:

Coordenada X e coordenada Y do primeiro ponto.
Coordenada X e coordenada Y do segundo ponto.
Saída:

A distância entre os pontos com duas casas decimais.

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39902
*/

#include <stdio.h>
#include <math.h>

int main(){
    
    float x1 = 0;
    float y1 = 0;
    float x2 = 0;
    float y2 = 0;
    scanf("%f\n %f\n %f\n %f",&x1,&y1,&x2,&y2);
    
    double valor1 = x2 - x1;
    valor1 = valor1*valor1;
    
    double valor2 = y2 - y1;
    valor2 = valor2*valor2;
    
    double res = valor1 + valor2;
    
    double resfinal = sqrt(res);
    printf("%.2lf",resfinal);
}