#include <stdio.h>
#include <string.h>

int main(){
	
	char str[30], str2[30], str1[30];
	int i, j, temp;
	
	printf("Digite uma palavra: ");
	scanf("%s", &str);
	strcpy(str1,str);
	
	for(i=0; i<strlen(str); i++){

		for(j=i+1; j<strlen(str); j++){
			if (j>i){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}	
	}
	
	strcpy(str2, str);
	
	if(strcmp(str1,str2)==0){
		printf("A palavra é um palíndromo\n");
	}else{
		printf("Essa palavra não é um palímdromo\n");
	}
	
	printf("Primeira palavra: %s\n", str1);
	printf("Segunda palavra: %s", str2);
	
	return 0;
}