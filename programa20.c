#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int main(){
    int ano=0;
    float altura_Juca = 1.10, altura_Chico =1.50;

    while (altura_Juca < altura_Chico)
    {
        altura_Chico+=0.02;
        altura_Juca+=0.03;
        ano++; 
        
    }
    
     printf("O Juca precisa de %d anos para passar o Chico \n", ano);
      
    
	
	
	
	
	
	
	return 0;
	
	}
}
