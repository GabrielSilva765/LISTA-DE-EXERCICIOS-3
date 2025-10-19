#include <stdio.h>

int main (){
	
	int nums[8], i, j, aux;
	
	printf("Digite 8 números inteiros: \n");
	for (i=0; i <8; i++){
		printf("Número %d: ", i+1);
		scanf("%d", &nums[i]);
	}
	
	for (i=0; i<8;i++){
		for (j=i+1; j<8; j++){
			if(nums[j] > nums[i]){
			
				aux=nums[i];
				nums[i]=nums[j];
				nums[j]=aux;
			}
		}
	}
	
	printf("\nOs números em ordem decrescente: ");
	for (i = 0; i<8; i++) {
        printf("%d ", nums[i]);
    }

	return 0;
}