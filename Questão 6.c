#include<stdio.h>
#include<locale.h>
/*Faça um programa que solicita e lê temperatura em Fahrenheit, faz a conversão para Celsius e exibe tal resultado. 
Para isto, utilize a seguinte fórmula: 𝐶 = (𝐹 − 32)/1,8.
*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	float f, c;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c = (f - 32)/1.8;
	
	printf("A temperatura em Celsius é: %.1f °C", c);
	return(0);
}
