//FUNÇÃO PARA ALTERAR VALORES DE UM VETOR
#include <stdio.h>
#include <time.h>


//não altere a função main()
int main(void) {
	srand(time(NULL));
	//ler tamanho do vetor e elemenos para o vetor
	float v[10], num;

	scanf("%f", &num);

	atribuir(v,10,num);
	int aleat = rand()%10;
	if (v[aleat] == num) {
		printf("ok");
	} else {
		printf("algo incorreto ocorreu!");
	}
	
	return 0;
}
