#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco_fabrica,per_lucro_dist,per_impostos,valor_lucro_dist,valor_impostos,preco_veiculo;
	
	printf("Insira o preco de fabrica do veiculo:");
	scanf("%f",&preco_fabrica);
	printf("Insira o percentual de lucro do distribuidor:");
	scanf("%f",&per_lucro_dist);
	printf("Insira o percentual de impostos");
	scanf("%f",&per_impostos);
	
	valor_lucro_dist= per_lucro_dist/100;
	valor_impostos= per_impostos/100;
	preco_veiculo= preco_fabrica+valor_lucro_dist+valor_impostos;
	
	
	printf("O valor do distribuidor e: %f \n",valor_lucro_dist);
	printf("O valor de impostos e: %f \n",valor_impostos);
	printf("O valor final do carro e: %f ",preco_veiculo);
	
	
	
	
	return 0;
}
