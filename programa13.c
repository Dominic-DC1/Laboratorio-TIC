#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,soma,numeros_impares;
	
	for(i=1;i<500;i++){
		
		if(i%2!=0){
			numeros_impares=i;
		}
		if(numeros_impares%3==0){
			soma=soma+numeros_impares;
		}
	}
	
	
	printf("%d",soma);
	
	
	return 0;
}
