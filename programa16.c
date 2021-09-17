#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vet[15],i, menor,maior;
	
	for(i=0;i<15;i++){	
		printf("insira a altura da pessoa:");
		scanf("%f",&vet[i]);
	}
	
	if(menor<vet[i]){
		menor=vet[i];
	}
	if(i==0){
		maior=vet[i];
	}else if(vet[i]>maior){
		maior=vet[i];
	}
	printf("o menor do grupo e: %d \n",menor);
	printf("o maior do grupo e: %d \n",maior);
	
	
	
	return 0;
}
