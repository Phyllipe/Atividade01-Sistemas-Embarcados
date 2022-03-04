#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int lado,area,perimetro;
	
	printf("Digite em cm o lado quadrado: ");
	scanf("%d", &lado);
	
	area = lado*lado;
	perimetro = lado*4;
	
	printf("A area do quadrado e: %d\n", area);
	printf("O perimetro do quadrado e: %d\n", perimetro);

	
}