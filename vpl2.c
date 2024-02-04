//VALOR DE UMA SÉRIE
#include <stdio.h>

int main(){
    float H, i;
    int N;
    printf("Digite um número: ");
    scanf("%i", &N);
    H=0;
    if(N>0){
        for(i=1; i<=N; i++){
            H = H + 1/i;
        }
        printf("%.3f", H);
    }else if(N<0){
        H=1;
        for(i=-1; i>=N; i--){
        H= H + 1/i;
        }
        printf("%.3f", H);
    } else if(N==0){
        printf("O valor fornecido não é válido.");
    }
    return 0;
}