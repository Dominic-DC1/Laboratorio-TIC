#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario,novo_salario;
	
	printf("Insira o valor do salario do funcionario:");
	scanf("%f",&salario);
	
	novo_salario= salario+0.25;
	
	printf("O novo salario e: %f ",novo_salario);
	
	
	
	return 0;
}
