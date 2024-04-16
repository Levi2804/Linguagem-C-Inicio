#include<stdio.h>
#include<locale.h>
/*
Faça um programa para calcular o volume de uma caixa retangular. Para isto, utilize
a seguinte fórmula:
𝑣𝑜𝑙𝑢𝑚𝑒 = 𝑐𝑜𝑚𝑝𝑟𝑖𝑚𝑒𝑛𝑡𝑜 × 𝑙𝑎𝑟𝑔𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟𝑎
Os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário.
*/
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
