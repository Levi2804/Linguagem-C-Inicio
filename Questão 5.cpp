#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf("Digite um n�mero: ");
	scanf("%i", &a);
	printf("Digite mais um n�mero: ");
	scanf("%i", &b);
	
	printf("\nO dobro de %i � %i", a, a * 2);
	printf("\nO triplo de %i � %i", b, b * 3);
	return(0);
}
