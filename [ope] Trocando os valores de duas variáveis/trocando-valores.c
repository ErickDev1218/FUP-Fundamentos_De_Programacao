/*Link -> https://moodle2.quixada.ufc.br/mod/vpl/forms/edit.php?id=39898&userid=2305

Leia os valores de duas variáveis inteiras a e b, troque os valores destas variáveis, e imprima os valores das variáveis a e b (nesta ordem).

<<
2
3
>>
3
2

*/
#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int z = 0;
        
    scanf("%d %d",&a,&b);
    
    z = a;
    a = b;
    b = z;
    
    printf("%d\n%d",a,b);
    
}