#include <stdio.h>

int main (){
	
	int vetor[10], i, j, contador, repetido;
	
	printf("Digite 10 números: \n");
	for(i=0; i<10;i++){
		printf("Número %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<10; i++){
		contador=0;
		
		repetido=0;
		for(j=0; j<i; j++){
			if(vetor[i]==vetor[j]){
				repetido=1;
				break;
			}
		}
		
		if(repetido){
			continue;
		}
		
		for (j=0; j<10; j++) {
            if (vetor[i] == vetor[j]) {
                contador++;
            }
        }
        printf("O número %d apareceu %d vezes.\n", vetor[i], contador);
        
	}
	return 0;
}