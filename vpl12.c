//MENOR E MAIOR VALOR ENTRE 10 VALORES
#include <stdio.h>



int main()
{
    int num[10], i;
    for(i=0; i<10; i++){
        scanf("%i", &num[i]);
    }
    int maiorValor = num[0], menorValor = num[0];
    for(i=0; i<10; i++){
        if(num[i] > maiorValor){
            maiorValor = num[i];
        }
    }
    
    for(i=0; i<10; i++){
        if(num[i] < menorValor){
            menorValor = num[i];
        }
    }
    printf("%i %i", menorValor, maiorValor);
    return 0;
    
}