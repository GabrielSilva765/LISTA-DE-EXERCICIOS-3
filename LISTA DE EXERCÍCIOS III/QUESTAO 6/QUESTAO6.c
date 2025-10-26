#include <stdio.h>

int main() {
	
    int nums[10], i, j, repetido;
    
    printf("Digite 10 números: \n");
    
    for (i=0; i<10; i++){
    	printf("Número %d:", i+1);
	    scanf("%d", &nums[i]);
	}
	
	printf("Números que não se repetem:\n");
	    
    
    for (i = 0; i < 10; i++) {
        repetido = 0; 

        for (j = 0; j < 10; j++) {
            if (i != j && nums[i] == nums[j]) {
                repetido = 1; 
                break; 
            }
        }

        if (repetido == 0) {
            printf("%d ", nums[i]);
        }
	}
    

    return 0;
}