#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario_min,salario,q_salario;
	
	printf("Insira o valor do salario minimo:");
	scanf("%f",&salario_min);
	
	printf("insira o valor do salario do funcionario:");
	scanf("%f",&salario);
	
	q_salario= salario/salario_min;
	
	printf("a quantidade de salarios minimos que o funcionario recebe e: %f ",q_salario);
	
	
	return 0;
}
