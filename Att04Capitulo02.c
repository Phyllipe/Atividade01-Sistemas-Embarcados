#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int marcaA, marcaB, marcaC;
	
	printf("Quantidade de chuteiras da marca A: ");
	scanf("%d", &marcaA);
	printf("Quantidade de chuteiras da marca B: ");
	scanf("%d", &marcaB);
	printf("Quantidade de chuteiras da marca C: ");
	scanf("%d", &marcaC);
	
	printf("\n\nTemos %d chuteiras da Marca A, %d chuteiras da marca B, %d chuteiras da marca C.\n\n" , marcaA,marcaB,marcaC);
	
	printf("\t\tQuantidade de chteiras: \n");
	printf("\t\tMarca A \t Marca B \tMarca C\n");
	printf("\t\t   %d   \t    %d   \t   %d\n",marcaA,marcaB,marcaC);

		
}