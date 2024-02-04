//PRODUTO INTERNO
#include <stdio.h>
int main(){
    int i, p=0, n;
    printf("Qual tamanho deseja que seus vetores tenham? ");
    scanf("%i", &n);
    float vetA[n], vetB[n];
    printf("Digite os elementos do seu vetor A: ");
    for(i=0; i<n; i++){
        scanf("%f", &vetA[i]);
    }
    printf("Digite os elementos do seu vetor B: ");
    for(i=0; i<n; i++){
        scanf("%f", &vetB[i]);
    }
    printf("Realizando o produto interno entre os vetores...");
    for(i=0; i<n; i++){
        p = p + (vetA[i]*vetB[i]);
    }
    printf("O resultado é %i", p);
    
    return 0;
    
}