#include<stdio.h>
#include<locale.h>
#include<math.h>
#define Pi 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, a;
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	a = Pi * pow(r,2);
	
	printf("A área da circunferência é: %.2f", a);
	
	return(0);
}
