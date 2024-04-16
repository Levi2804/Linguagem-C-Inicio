#include<stdio.h>
#include<locale.h>
#include<math.h>
#define Pi 3.14
/*
Elabore um programa que calcula a área de uma circunferência. Para isto, utilize a
seguinte fórmula:
𝐴 = 𝜋*𝑟²
O valor do raio deve ser fornecido pelo usuário.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, a;
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	a = Pi * pow(r,2);
	
	printf("A área da circunferência é: %.2f", a);
	
	return(0);
}
