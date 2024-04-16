#include<stdio.h>
#include<locale.h>
/*
. Todos os números naturais possuem antecessor, que é o número que antecede
(anterior) um valor específico, e sucessor, que é o número que sucede (posterior) um
valor específico. Sabendo disso, implemente um programa que solicita ao usuário a
entrada de um número inteiro e apresenta seu antecessor e sucessor. 
*/
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
