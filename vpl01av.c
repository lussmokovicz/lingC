//VETORES POSITIVOS E NEGATIVOS
#include <stdio.h>

int main(){

    int x=0, i, valorElemento, ignorado=0;
    scanf("%i", &x);
    int vetA[x], vetB[x], tamA=0, tamB=0; //Aqui os vetores iniciam com zero
    
    for(i=0; i<x; i++){ //Nesse for, ao mesmo tempo que vai atribuindo valor ao elemento da posição vetA[tamA++], vai contando o tamanho
        scanf("%i", &valorElemento);
        if (valorElemento>0){
            vetA[tamA++] = valorElemento;
        } else if (valorElemento < 0){
            vetB[tamB++] = valorElemento;
        }
    }
    
    float mediaVetA=0;
    int sA=0, acimaMA=0;
    
    if(tamA >= tamB){
        for(i=0; i<tamA; i++){
            sA = sA + vetA[i];
            
        }
        mediaVetA = sA/tamA;
        
        for(i=0; i<tamA; i++){
            if(vetA[i]>mediaVetA){
                acimaMA++;
            }
        }
        printf("%.2f %i", mediaVetA, acimaMA);
        
    } else if(tamB >= tamA){
        printf("%i", tamB);
    }
    

    return 0;
}