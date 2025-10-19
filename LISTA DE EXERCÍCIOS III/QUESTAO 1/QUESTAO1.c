#include <stdio.h>
#include <string.h>
int main(){
	
	char palavra [25];
	int letras, vogais=0, consoantes=0, i;
	
	printf("Digite uma palvra: ");
	scanf("%s", &palavra);
	
	letras=strlen(palavra);
	
	for( i=0; i < letras; i++){
		switch (palavra[i]){
			case 'A':
			case 'a':
			case 'E':			
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				vogais++;
				break;
			default:
				consoantes++;
		}
	}
	
	printf("Você digitou a palavra: %s\n", palavra);
	printf("Essa palavra tem %d vogais\n", vogais);
	printf("E tem %d consoantes\n", consoantes);
	
	return 0;
}