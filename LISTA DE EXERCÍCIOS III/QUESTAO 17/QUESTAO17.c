#include <stdio.h>

int main(){
	float num;
	printf("Digite um número real qualquer: ");
	scanf("%f", &num);
	
	if (num < 0){
		printf("É um número negativo.");
	}else if(num > 0){
		printf("É um número positivo.");		
	}else{
		printf("É o número zero.");
	}

	return 0;
}