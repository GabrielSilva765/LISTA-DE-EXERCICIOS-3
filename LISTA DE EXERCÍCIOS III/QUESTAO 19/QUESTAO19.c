#include <stdio.h>
#include <string.h>
int main(){
	
	char palavra [30];
	int letras, letrasA=0, outras=0, i;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	letras=strlen(palavra);
	
	for( i=0; i < letras; i++){
		switch (palavra[i]){
			case 'A':
			case 'a':
				letrasA++;
				break;
			default:
				outras++;
		}
	}
	
	printf("Essa palavra tem %d letras \"a\". \n", letrasA);

	return 0;
}