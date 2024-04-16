#include<stdio.h>
#include<locale.h>
/*
Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
primeiro e o triplo do segundo.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf("Digite um número: ");
	scanf("%i", &a);
	printf("Digite mais um número: ");
	scanf("%i", &b);
	
	printf("\nO dobro de %i é %i", a, a * 2);
	printf("\nO triplo de %i é %i", b, b * 3);
	return(0);
}
