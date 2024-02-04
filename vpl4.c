//MAIOR VALOR DO VETOR
#include <stdio.h>
int main(){
    int i, n;
    printf("Informe o tamanho do seu vetor: ");
    scanf("%i", &n);
    float M, vetA[n];
    printf("Digite os elementos do seu vetor: ");
    for(i=0; i<n; i++){
        scanf("%f", &vetA[i]);
    }
    M = vetA[0];
    for(i=1; i<n; i++){
       if(vetA[i]>M){
        M = vetA[i];
       }
    }
    printf("O maior valor do vetor é %.1f", M);
    return 0;

}