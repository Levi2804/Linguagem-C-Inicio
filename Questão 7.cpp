#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	printf("Digite um n�mero: ");
	scanf("%f", &n);
	
	printf("\nO cubo de %.1f � %.1f", n, pow(n, 3));
	return(0);
}
