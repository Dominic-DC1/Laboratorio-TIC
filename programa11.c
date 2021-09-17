#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a,b,c,x,D;
	
	printf("insira o valor dos coeficientes:");
	scanf("%f%f%f",&a,&b,&c);
	
	D= (b*b)-4*a*c;
    x= -b+(sqrt(D))*2*a;
	
	if(x>0){
		printf("Possui duas raízes reais e distintas");	
	}else if(x=0){
	    printf("Possui apenas uma raiz real");
	}else if(x<0){
     	printf("Não possui raiz real");
	}
	
	
	return 0;
}
