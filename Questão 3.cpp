#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	printf("O antecessor de %i � %i", n, n - 1);
	printf("\nO sucessor de %i � %i", n, n + 1);
	return(0);
}
