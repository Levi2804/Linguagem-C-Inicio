#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	//Aqui, a pessoa digita um número inteiro qualquer.
	printf("Digite um número inteiro: ");
	scanf("%i", &n);

	//Nesse ponto, o código usa o número escolhido para mostrar o seu antecessor e sucessor. 
	printf("O antecessor de %i é %i", n, n - 1);
	printf("\nO sucessor de %i é %i", n, n + 1);
	return(0);
}
