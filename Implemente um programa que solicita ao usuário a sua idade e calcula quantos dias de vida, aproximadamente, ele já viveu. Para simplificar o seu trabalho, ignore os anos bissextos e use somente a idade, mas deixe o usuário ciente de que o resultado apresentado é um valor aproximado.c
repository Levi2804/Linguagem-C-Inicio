#include<stdio.h>
#include<locale.h>
/*
Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
de vida, aproximadamente, ele já viveu. Para simplificar o seu trabalho, ignore os
anos bissextos e use somente a idade, mas deixe o usuário ciente de que o resultado
apresentado é um valor aproximado.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float i, d;
	printf("Digite a sua idade: ");
	scanf("%f", &i);
	
	d = i * 365;
	
	printf("Você viveu aproximadamente %.1f dias!", d);
	return(0);
}
