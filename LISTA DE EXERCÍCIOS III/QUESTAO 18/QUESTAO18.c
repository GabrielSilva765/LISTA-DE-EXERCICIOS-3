#include <stdio.h>
#include <string.h>
int main(){
	
	char palavra1 [30], palavra2 [30];
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra1);
	printf("Digite outra palavra: ");
	scanf("%s", &palavra2);
	

	if (strcmp(palavra1, palavra2) == 0){
		printf("São palavras iguais.");
	}else{
		printf("São palavras diferentes.");
	}

	return 0;
}