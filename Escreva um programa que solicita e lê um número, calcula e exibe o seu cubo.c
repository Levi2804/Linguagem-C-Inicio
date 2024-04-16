#include<stdio.h>
#include<locale.h>
#include<math.h>
//Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	printf("Digite um número: ");
	scanf("%f", &n);
	
	printf("\nO cubo de %.1f é %.1f", n, pow(n, 3));
	return(0);
}
