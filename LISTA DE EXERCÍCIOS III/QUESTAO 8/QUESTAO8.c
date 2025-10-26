#include <stdio.h>

int main (){
	
	int nums[10], i;
	int indicemaior=0, indicemenor=0;
	
	printf("Digite 10 números inteiros: \n");
	for (i=0; i <10; i++){
		printf("Número %d: ", i+1);
		scanf("%d", &nums[i]);
	}
	
	for(i=1; i<10;i++){
		if (nums[i]>nums[indicemaior]){
			indicemaior=i;
		}
		if(nums[i]<nums[indicemenor]){
			indicemenor=i;
		}
	}
	
	printf("O índice com o maior número é o %d\n", indicemaior);
	printf("O índice com o menor número é o %d", indicemenor);	
	
	return 0;
}