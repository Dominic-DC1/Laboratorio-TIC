#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,verso=0,aux;
	
	printf("digite um numero com 5 digitos:");
	scanf("%d",&n);
	aux=n;
	verso=0;
	
	while(aux!=0){
		verso= verso*10+aux%10;
		aux = aux / 10;
	}
	printf("\n numero %d \n numero invertido %d \n ",n,verso);
	
	if(n==verso){
		printf("E palindrono");
	}else{
		printf("Nao e palindrono");
	}
	
	return 0;
}
