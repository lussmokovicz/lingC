//MÉDIA DAS NOTAS
#include <stdio.h>



int main()
{
    float n1, n2, m;
    while (n1 != 50 && n2 != 50){
        scanf("%f", &n1);
        scanf("%f", &n2);
        m = (n1+n2)/2;
        printf(" %.2f ", m);
    }
    return 0;
}
