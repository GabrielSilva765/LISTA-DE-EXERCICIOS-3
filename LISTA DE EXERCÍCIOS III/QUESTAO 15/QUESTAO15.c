#include <stdio.h>

int main(){
	
	int mat[5][5]= {{0, 0, 1, 0, 0},{0, 0, 1, 0, 0},{1, 1, 1, 1, 1},{0, 0, 1, 0, 0},{0, 0, 1, 0, 0}};
	int i, j;
	
	printf("Matriz: \n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d  ", mat[i][j]);
		}	
		printf("\n");	
	}
	
	return 0;
}