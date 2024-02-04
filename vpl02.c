//CALCULADORA
#include <stdio.h>
#include <math.h>

int main(){
    int entrd=1, oprc;
    float rstd=0, val1, val2;
    
    while(entrd !=0){
        switch (entrd){
            case 1:
                scanf("%i", &oprc);
        
                switch(oprc){
                    case 1: //soma
                    scanf("%f %f", &val1, &val2);
                    rstd = val1 + val2;
                    break;
                    case 2: //subtração
                    scanf("%f %f", &val1, &val2);
                    rstd = val1 - val2;
                    break;
                    
                    case 3: //divisão - porém, se 1 entrada for 0, quebra
                    scanf("%f %f", &val1, &val2);
                    rstd = val1/val2;
                    break;
                    case 4: //multiplicação
                    scanf("%f %f", &val1, &val2);
                    rstd = val1*val2;
                    break;
                    
                    case 5: //potenciação
                    scanf("%f %f", &val1, &val2);
                    rstd = pow(val1,val2);
                    break;
                    case 6: //radiciação -  porém, se tiver entrada de número negativo, quebra
                    scanf("%f", &val1);
                    rstd = sqrt(val1);
                    break;
                    
                    
                    default: break;
                }
                
                scanf("%i", &entrd); //Comando para nova operação
                break;
            
            
            case 2:
                if(entrd == 2){
                    scanf("%i", &oprc);
        
                switch(oprc){
                    case 1: //soma
                    scanf("%f", &val2);
                    rstd = rstd + val2;
                    break;
                    case 2: //subtração
                    scanf("%f", &val2);
                    rstd = rstd - val2;
                    break;
                    
                    case 3: //divisão - porém, se 1 entrada for 0, quebra
                    scanf("%f", &val2);
                    rstd = rstd/val2;
                    break;
                    case 4: //multiplicação
                    scanf("%f ",  &val2);
                    rstd = rstd*val2;
                    break;
                    
                    case 5: //potenciação
                    scanf("%f ", &val2);
                    rstd = pow(rstd,val2);
                    break;
                    case 6: //radiciação -  porém, se tiver entrada de número negativo, quebra
                    rstd = sqrt(rstd);
                    break;
                    
                    
                    default: break;
                }
                
                
                
                scanf("%i", &entrd); //Comando para nova operação
            }
                
            break;
                
            default: break;
        }
        
    } 

    printf("%.6f", rstd); //Mostra o resultado com as 6 casas decimais dos exemplos.
    return 0;
}