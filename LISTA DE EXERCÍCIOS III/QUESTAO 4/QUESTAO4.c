#include <stdio.h>
#include <string.h>

int main(){
	
	char num[100];
	
	printf("Digite um número inteiro positivo: ");
	scanf("%s", &num);
	
	int digitos = strlen(num);
	
	printf("O número %s tem %d dígitos.", num, digitos);
	return 0;
}