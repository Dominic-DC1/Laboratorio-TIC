#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario_min,kilo_residencia,valor_por_kilo,valor_residencia,valor_com_desconto;
	
	printf("insira o valor do salario minimo:");
	scanf("%f",&salario_min);
	printf("insira a quantidade de kilowatts consumida pela residencia:");
	scanf("%f",&kilo_residencia);
	
	valor_por_kilo= salario_min/5;
	valor_residencia= kilo_residencia/valor_por_kilo;
	valor_com_desconto= valor_residencia-0.15;
	
	printf("o valor de cada kilowatts e: %f \n",valor_por_kilo);
	printf("o valor a ser pago por essa residencia e: %f \n",valor_residencia);
	printf("o valor com desconto e: %f ",valor_com_desconto);
	
	
	
	return 0;
}
