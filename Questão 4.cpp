#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float c, f;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = (c * 1.8) + 32;
	
	printf("A temperatura em Fahrenheit é: %.1f °F", f);
	return(0);
}
