#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, r, d;
	printf("Digite a cota��o do d�lar atual: ");
	scanf("%f", &c);
	printf("\nDigite o valor em real a ser convertido: ");
	scanf("%f", &r);
	
	d = r/c;
	
	printf("\nO valor em dolar �: $ %.2f", d);
	
	return(0);
}
