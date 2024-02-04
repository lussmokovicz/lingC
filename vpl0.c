//ÁREA DE RETÂNGULO
#include <stdio.h>

int main()
{
   float b1, l1, b2, l2;
   float a1, a2;
   printf("Entre com os valores da base e o lado do primeiro retangulo:");
   scanf("%f %f", &b1, &l1);
   printf("Entre com os valores da base e o lado do segundo retangulo:");
   scanf("%f %f", &b2, &l2);
   
   a1=b1*l1;
   a2=b2*l2;
   
   if(a1>a2){
       printf("primeiro retangulo maior");
   }
   else if(a2>a1){
       printf("segundo retangulo maior");
   } 
   else{
       printf("retangulos com area igual");
   }
    return 0;
}