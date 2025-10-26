#include <stdio.h>

int main(){
	
	int num1, num2, i;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	printf("Digite um número inteiro maior que o anterior: ");
	scanf("%d", &num2);
	
	printf("Aqui estão todos os números inteiros entre esses números: \n");
	for( i=0; i < num2 && num1 < (num2-1); i++){
		num1++;
		printf("%d\n", num1);
	}
	

	return 0;
}