#include "stdio.h"
#include "stdlib.h"

int main()
{
	int n, i, flag = 0;
	float *f1, *f2;
	
	printf("\n Digite o tamanho desejado para o vetor: ");
	scanf("%d", &n);
	
	f1 =(float *) malloc(n * sizeof(float));
	if (f1 == NULL)
		exit(1);
	else{
		printf("\n Vetor alocado com malloc: ");
		for(i = 0; i < n; i++)
			printf(" %.2f", f1[i]);
	}
	f2 = (float *) calloc(n, sizeof(float));
	if(f2 == NULL)
		exit(1);
	else{
		printf("\n Vetor alocado com calloc: ");
		for(i = 0; i < n; i++)
			printf(" %.2f", f2[i]);
	}
	printf("\n Inclusao de dados nos vetores ");
	printf("\n Vetor f1 = ");
	for (i = 0; i < n; i++)
	{
		printf("\n Digite um numero float para a posicao %d do vetor f1: ", i);
		scanf("%f", &f1[i]);
	}  	
	printf("\n Vetor f2 = ");
	for (i=0; i< n; i++)
	{
		printf("\n Digite um numero float para a posicao %d do vetor f2: ", i);
		scanf("%f", &f2[i]);
	}  	
	
	printf("\n Verificacao de espaco livre ");
	for(i = 0; i < n && flag != 1; i++)
		if(f2[i] == 0){
			flag = 1;
			printf("\n Espaco de alocacao livre a partir da posicao %d", i);
		}
	if (flag ==0)
		printf("\n Nao ha posicao livre no vetor f2");
	   
	free(f1);
	free(f2);
	return 0;
}