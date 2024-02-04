//MÉDIA DO VETOR
#include <stdio.h>

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 0, 0, 8, 4, 3}, num;
    //leitura da quantidade de elementos do vetor necessaria
    scanf("%i", &num);
	
    //codifique a partir daqui – não mexer na parte anterior
    int i;
    float n=0, m;
    printf("] \n");
    for(i=0; i<num; i++){
        n = n + vet[i];
    }
    m = n/num;
    printf("%f", m);
    //codifique até aqui
   return 0;
}