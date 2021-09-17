#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,vet[10],c1,c2;	
	float media1,media2,soma;
	
	for(i=0;i<10;i++){
		
		printf("digite um numero:");
		scanf("%d",&vet[i]);
		
	}
	
	if(vet[i]%2==0){
		c1++;
	}else{
		c2++;
	}
	
	soma=soma+vet[i];
	media1=soma/c1;
	media2=soma/c2;
	
	printf("a media dos numeros pares e: %f ",media1);
	printf("a media dos numeros impares e: %f ",media2);
	
	
	
	
	
	
	
	return 0;
}
