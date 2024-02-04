//VALORES ÍMPARES DE UMA MATRIZ
#include <stdio.h>

int main()
{
    int i, j, c,  np=0;
    float M[3][3];
    printf("Digite os valores da sua matriz: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%i", &c);
            M[i][j] = c;
            if(c%2 !=0){
                np++;
            }
            
        }
    }
    printf("%i", np);

    return 0;
}