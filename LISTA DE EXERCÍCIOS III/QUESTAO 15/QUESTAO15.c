#include <stdio.h>

int main(){
	
	int mat[5][5]= {{0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}};
	int i, j;
	
	printf("Matriz 1: \n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d  ", mat[i][j]);
		}	
		printf("\n");	
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			mat[i][2]=1;
		}
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			mat[2][j]=1;
		}
	}
	
	printf("Matriz 2: \n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d  ", mat[i][j]);
		}	
		printf("\n");	
	}
	
	return 0;
}