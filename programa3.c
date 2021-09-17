#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano_atual,ano_nas,idade1,idade2;
	
	printf("Insira o ano atual:");
	scanf("%d",&ano_atual);
	
	printf("Insira o ano de nascimento:");
	scanf("%d",&ano_nas);
	
	idade1= ano_atual-ano_nas;
	idade2= 2050-ano_nas;
	
	printf("A pessoa tem %d de idade\n",idade1);
	printf("Em 2050 a pessoa tera %d de idade",idade2);
	
	
	return 0;
}
