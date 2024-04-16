#include<stdio.h>
#include<locale.h>
#include<math.h>
/*
Você foi procurado por uma nutricionista para automatizar o cálculo do Índice de
Massa Corpórea (IMC) de seus pacientes. Para isto, crie um programa que solicita e
lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais
após a vírgula. O IMC é calculado por meio da seguinte fórmula:
𝐼𝑀𝐶 = 𝑝𝑒𝑠𝑜/𝑎𝑙𝑡𝑢𝑟𝑎².
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float p, a, imc;
	printf("Digite o seu peso: ");
	scanf("%f", &p);
	printf("Digite a sua altura: ");
	scanf("%f", &a);
	
	imc = p/pow(a,2);
	
	printf("O seu IMC é: %.2f", imc);
	
	return(0);
}
