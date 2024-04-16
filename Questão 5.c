#include<stdio.h>
#include<locale.h>

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
