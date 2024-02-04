//PALAVRA AO CONTRÁRIO
#include <stdio.h>
#include <string.h>

int main(){
    char t[200], palavra[200];
    int tam, j, i=0;
    printf("Digite seu texto: ");
    fgets(t,200,stdin);
    tam = strlen(t);
    while(t[i]!='\0'){
        int c = 0;
        while(t[i] != ' '&& t[i] != '\0'){
            palavra[c]=t[i];
            c++;
            i++;
        }
        palavra[c]='\0';
        for(j=c-1; j>=0;j--){
            printf("%c", palavra[j]);
        }
        printf("\n");
        while(t[i] == ' '){
            i++;
        }
    }
    return 0;
}