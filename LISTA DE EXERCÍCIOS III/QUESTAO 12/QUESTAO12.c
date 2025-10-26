#include <stdio.h>

int main(){
	
	int vet1[5], vet2[5], i, produto=0;
	printf("Digite os valores inteiros do primeiro vetor: \n");
	for(i=0; i<5; i++){
		printf("Valor %d: ", i+1);
		scanf("%d",&vet1[i]);
	}
	
	printf("Digite os valores interios do segundo vetor: \n");
	for(i=0; i<5; i++){
		printf("Valor %d: ", i+1);
		scanf("%d",&vet2[i]);
	}
	/*produto = vet1[0]*vet2[0] + vet1[1]*vet2[1] + vet1[2]*vet2[2] + vet1[3]*vet2[3] + vet1[4]*vet2[4];*/
	for(i=0; i<5; i++){
		produto += vet1[i]*vet2[i];
		
	}
	
	printf("O produto escalar dos dois vetores é: %d", produto);
	 
	return 0;
}