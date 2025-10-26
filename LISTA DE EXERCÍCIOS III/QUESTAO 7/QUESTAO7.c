#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int numeros[50], i, j, cont=0, repetido, unicos[50];
	
	srand(time(NULL));
	for (i=0; i<50; i++){
		numeros[i] = rand() % 20 + 1;
	}
	
	printf("Array inicial:\n");
    for (i = 0; i<50; i++) {
        printf("%d ", numeros[i]);
    }
    
    for (i=0; i<50; i++){
    	repetido=0;
    	
    		for (j=0; j<cont; j++){
    			if (numeros[i]==unicos[j]){
    				repetido=1;
    				break;
				}
			}
			
		if (repetido == 0) {
            unicos[cont] = numeros[i];
            cont++;
        }
	}
	
    printf("\nArray com números únicos:\n");
    for (i = 0; i<cont; i++) {
        printf("%d ", unicos[i]);
    }
	return 0;
}