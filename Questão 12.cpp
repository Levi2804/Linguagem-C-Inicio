#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float v, c, l, a;
	printf("Digite o valor da comprimento: ");
	scanf("%f", &c);
	printf("Digite o valor da largura: ");
	scanf("%f", &l);
	printf("Digite o valor da altura: ");
	scanf("%f", &a);
	
	v = c * l * a;
	
	printf("\nO volume da caixa retangular é: %.1f m³", v);
		
	return(0);
}
