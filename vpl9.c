//MUITOS VETORES
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

float media(float v[], int TAM){
    int m;
    float s = 0;
    for(m = 0; m < TAM; m++){
        s = s + v[m];
    }
    return s / TAM;
}

int main(){
    float v1[10], v2[20], v3[30], v4[40], x, y, z, w, maiormedia = 0, maiormedia2 = 0;
    int i, j, k, l;
    char vetormaior[10], vetormaior2[10]; // Array de caracteres, já que vai ter string
    srand(time(NULL)); 
    
    // Mostrar os vetores 
    printf(" Vet1: [ ");
    for(i = 0; i < 10; i++){
        v1[i] = (rand() % 71) + (-20); // valor maior menos, menos o menor, mais 1
        printf(" %.2f ",  v1[i]);
    }
    printf("] ");
    printf("\n");
    printf("\n");
    
    printf(" Vet2: [ ");
    for(j = 0; j < 20; j++){
        v2[j] = (rand() % 71) + (-20);
        printf(" %.2f ",  v2[j]);
    }
    printf("] ");
    printf("\n");
    printf("\n");
    
    printf(" Vet3: [ ");
    for(k = 0; k < 30; k++){
        v3[k] = (rand() % 71) + (-20);
        printf(" %.2f ",  v3[k]);
    }
    printf("] ");
    printf("\n");
    printf("\n");
    
    printf(" Vet4: [ ");
    for(l = 0; l < 40; l++){
        v4[l] = (rand() % 71) + (-20);
        printf(" %.2f ",  v4[l]);
    }
    printf("] ");
    printf("\n");

    float vmedia[4];
    int a, b;

    // Mostrar as médias
    vmedia[0] = media(v1, 10);
    x = media(v1, 10);
    printf("\n Vet1: %.2f", x);
    vmedia[1] = media(v2, 20);
    y = media(v2, 20);
    printf("\n Vet2: %.2f", y);
    vmedia[2] = media(v3, 30);
    z = media(v3, 30);
    printf("\n Vet3: %.2f", z);
    vmedia[3] = media(v4, 40);
    w = media(v4, 40);
    printf("\n Vet4: %.2f", w);
    
    printf("\n");

    char *nomes[4] = {"Vet1", "Vet2", "Vet3", "Vet4"};

    for(a = 0; a < 4; a++){
        if(vmedia[a] > maiormedia){
            maiormedia = vmedia[a];
            strcpy(vetormaior, nomes[a]); // Essa função copia strings
        }
    }

    for (b = 0; b < 4; b++){
        if (vmedia[b] > maiormedia2 && vmedia[b] != maiormedia) {
            maiormedia2 = vmedia[b];
            strcpy(vetormaior2, nomes[b]);
        }
    }

    printf("\n Vetor com a maior media: %s", vetormaior);
    printf("\n Vetor com a segunda maior media: %s", vetormaior2);

    return 0;
}