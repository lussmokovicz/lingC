//METROS EM DECÍMETROS, CENTÍMETROS E MILÍMETROS

#include <stdio.h>



int main()
{
    float tam;
    int dm, cm, mm;
    printf("Informe a medida em metros: ");
    scanf("%f", &tam);
    dm = tam*10;
    cm =  tam* 100;
    mm =  tam* 1000;
    
    printf("%i %i %i", dm, cm, mm);
    return 0;
}