#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int confirmado, suspeito, morte;
	
	printf("--------------------------------------------");
	printf("\nQuestinonario da dengue");
	printf("\nDigite o numero de casos suspeito: ");
	scanf("%d", &suspeito);
	printf("Digite o numero de casos confirmados: ");
	scanf("%d", &confirmado);
	printf("Digite o numero de mortes: ");
	scanf("%d", &morte);

	printf("\nO numero de casos supeitos: %d", suspeito);
	printf("\nO numero de casos confirmados: %d", confirmado);
	printf("\nO numero de mortes: %d", morte);
	printf("\n--------------------------------------------");

}