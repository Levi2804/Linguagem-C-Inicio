#include<stdio.h>
#include<locale.h>
#include<math.h>

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
