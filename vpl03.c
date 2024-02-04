//VETORES COM FUNÇÃO
#include <stdio.h>
#include <stdio.h>

float soma(float vet1[], int tamVet, int b){
    int s9=0, i;
    for(i=0; i<tamVet; i++){
        if(vet1[i] >= b){
            s9 = s9 + vet1[i];
        }
    }
    return s9;
}

void preencher(float vet2[], int tamVet2){
    int i, elementoVetor;
    for(i=0; i<tamVet2; i++){
        scanf("%i", &elementoVetor);
        vet2[i] =  elementoVetor;
    }
}

int conta(float vet2[], int tamVet2){
    int contImp=0, i;
    for(i=0; i<tamVet2; i++){
        if((int)vet2[i]%2 != 0 && vet2[i]>0){
            contImp++;
        }
    }
    return contImp;
}

int main(void) {
	float v[10] = {1,2,-3,4,5,6,7,8,-9,8};
	int x, y;
	
	scanf("%i %i", &x, &y);
	
	if (x != 9) {
		preencher(v, 10);
		printf("%i", conta(v,10));
	} else { 
		printf("%f", soma(v,10,y));
	}
	
	return 0;
}