//FATORIAL
#include <stdio.h>

int main(){
    int N, f, i;
    f=1;
    printf("Digite um número: ");
    scanf("%i", &N);
    if(N>0){
        for(i=1; i<=N; i++){
        f=f*i;
        }
        printf("O resultado é %i", f);
    }else if (N==0){
        f=1;
        printf("O resultado é %i", f);
    }else if(N<0){
        printf("O valor não é válido para este tipo de operação.");
    }

return 0;
}