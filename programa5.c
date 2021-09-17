#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario,per_aumento,valor_aumento,novo_salario;
	
	printf("Insira o salario do funcionario:");
	scanf("%f",&salario);
	printf("Insira o percentual de aumento:");
	scanf("%f",&per_aumento);
	
	valor_aumento= per_aumento/100;
	novo_salario= salario+valor_aumento;
	
	printf("O valor de aumento e: %f \n",valor_aumento);
	printf("O novo salario e: %f\n ",novo_salario);	
	
	
	
	return 0;
}
