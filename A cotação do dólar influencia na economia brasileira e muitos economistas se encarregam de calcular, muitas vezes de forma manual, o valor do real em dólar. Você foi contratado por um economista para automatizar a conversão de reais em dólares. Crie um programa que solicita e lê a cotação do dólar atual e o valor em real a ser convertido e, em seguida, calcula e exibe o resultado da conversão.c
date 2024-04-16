#include<stdio.h>
#include<locale.h>
/*
A cotação do dólar influencia na economia brasileira e muitos economistas se
encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar.
Você foi contratado por um economista para automatizar a conversão de reais em
dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da conversão.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, r, d;
	printf("Digite a cotação do dólar atual: ");
	scanf("%f", &c);
	printf("\nDigite o valor em real a ser convertido: ");
	scanf("%f", &r);
	
	d = r/c;
	
	printf("\nO valor em dolar é: $ %.2f", d);
	
	return(0);
}
