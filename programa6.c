#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float custo_esp,preco_bilhete,q_bilhete;
	
	printf("Insira o custo do espetaculo teatral:");
	scanf("%f",&custo_esp);
	
	printf("Insira o preco do bilhete:");
	scanf("%f",&preco_bilhete);
	
	q_bilhete= custo_esp/preco_bilhete;
	
	printf("A quantidade de bilhetes que devem ser vendidos e: %f \n",q_bilhete);
	
	
	
	return 0;
}
