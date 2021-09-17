#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,sucessor=0;
	
	do{
		
	printf("digite um numero:\n");
	scanf("%d",&n);
	sucessor= n+1;	
    printf("%d\n",sucessor);
    
	}while(n>0);

	return 0;
}
