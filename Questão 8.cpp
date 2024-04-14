#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float i, d;
	printf("Digite a sua idade: ");
	scanf("%f", &i);
	
	d = i * 365;
	
	printf("Você viveu aproximadamente %.1f dias!", d);
	return(0);
}
