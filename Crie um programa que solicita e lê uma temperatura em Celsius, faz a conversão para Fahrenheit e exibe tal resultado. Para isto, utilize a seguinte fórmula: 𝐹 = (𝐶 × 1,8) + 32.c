#include<stdio.h>
#include<locale.h>
/*Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão
para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte fórmula:
𝐹 = (𝐶 × 1,8) + 32
*/
int main(){
	setlocale(LC_ALL,"Portuguese");
	float c, f;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = (c * 1.8) + 32;
	
	printf("A temperatura em Fahrenheit é: %.1f °F", f);
	return(0);
}
