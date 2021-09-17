#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n,n1=0,n2=1,soma=0;
	
	printf("digite a quantidade de texto:");
	scanf("%i",&n);
	printf("%d\n%d\n",n1,n2);
	
	for(i=1;i<=n;i++){
		soma=n1+n2;
		n1=n2;
		n2=soma;
		printf("%d",soma);
	}
	
	return 0;
}
