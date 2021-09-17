#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float numero_horas,salario_min,salario_receber,horas_trabalhadas,salario_bruto,imposto;
	
	printf("Insira o valor do salario minimo:");	
	scanf("%f",&salario_min);
	printf("Insira o numero de horas trabalhadas:");
	scanf("%f",&numero_horas);
			
	horas_trabalhadas= salario_min/2;
	salario_bruto= horas_trabalhadas*numero_horas;
	imposto= (3/100)*salario_bruto;
	salario_receber= salario_bruto-imposto;
	
		printf("O salario a receber e: %f ",salario_receber);		
	
	
	
	
	
	return 0;
}
