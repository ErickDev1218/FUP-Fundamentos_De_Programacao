/*
Motivação
Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das raízes.
Agora é hora de implementar aquela conta pra nunca ter mais que fazer na mão.

Ação
Dados os valores de A, B e C, calcule as raízes.

Entrada e Saída:
Entrada:

Valores de A, B e C em ponto flutuante.
Saída:

Caso delta seja positivo, a saída deve ser a raiz positiva e raiz negativa, com duas casas decimais.
Caso delta seja igual a zero, uma única raíz deve ser considerada, com duas casas decimais.
Caso delta sela negativo, a saída deve ser "nao ha raiz real"

Link da questão -> https://moodle2.quixada.ufc.br/mod/vpl/view.php?id=39896
*/

#include <stdio.h>
#include <math.h>

float calc_delta(float b,float a, float c){
    float delta = (b*b)-4*(a*c);
    return delta;
}

float calc_bha_neg(float a, float b, float c, float d){
    float bha_neg = (-b-d)/(2*a);
    return bha_neg;
    
}

float calc_bha_pos(float a, float b, float c, float d){
    float bha_pos = (-b+d)/(2*a);
    return bha_pos;
    
}


int main(){
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f",&a,&b,&c);
    
    float delta_sem_raiz = calc_delta(b,a,c);
    float delta_com_raiz = sqrt(delta_sem_raiz);
    float neg = calc_bha_neg(a,b,c,delta_com_raiz);
    float pos = calc_bha_pos(a,b,c,delta_com_raiz);
    

    if(delta_sem_raiz < 0){
        printf("nao ha raiz real");
    }else if(delta_com_raiz == 0){
        printf("%.2f",neg);
    }else if(delta_com_raiz > 0){
        printf("%.2f %.2f",pos,neg);
    }
    return 0;
}