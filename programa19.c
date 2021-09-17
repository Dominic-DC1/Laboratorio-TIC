#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int dia[30];
    float precoPago[30], TotalGanhoDoHotel;

    for(int i=0; i<5; i++){
        printf("Digite o total de dias: ");
        scanf("%d",&dia[i]);
        if(dia[i]<15){
            precoPago[i] = (50+4)*dia[i];
            TotalGanhoDoHotel += precoPago[i];
        }
        if(dia[i]==15){
            precoPago[i] = (50+3.60)*dia[i];
            TotalGanhoDoHotel += precoPago[i];
        }
        if(dia[i]>15){
            precoPago[i] = (50+3)*dia[i];
            TotalGanhoDoHotel += precoPago[i];
        }
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Quarto numero %d\n", i+1);
        printf("Preco a pagar: %.2f\n",precoPago[i]);
    }

    printf("Total a ser pago %.2f\n",TotalGanhoDoHotel);
    printf("\n");
	
	
	
	return 0;
}
