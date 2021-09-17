#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,fat,n;
	
	printf("digite um valor:");
	scanf("%d",&a);
	
	for(fat=1;a>1;a=a-1){
		fat=fat*a;
	}
	
	printf("%d",fat);
	
	
	return 0;
}
