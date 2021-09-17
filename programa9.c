#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float peso_saco,q_racao_gato1,q_racao_gato2,q_resto,a,b,soma;
		
	printf("Insira o peso do saco de racao em kilos:");
	scanf("%f",&peso_saco);
	printf("Insira a quantidade de racao em gramas para o gato 1 e o gato 2:");
	scanf("%f%f",&q_racao_gato1,&q_racao_gato2);
	
	a= (q_racao_gato1*5)/1000;
	b= (q_racao_gato2*5)/1000;
	soma= a+b;
	q_resto= peso_saco-soma;
	
		printf("No saco restara %f kilos de racao apos 5 dias ",q_resto);	
	
	
	return 0;
}
