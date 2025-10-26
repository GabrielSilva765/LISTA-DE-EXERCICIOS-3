#include <stdio.h>

int main(){
	
	int mat[4][4], i, j;
	int diagonal;
	
	printf("Informe os valores inteiros da matriz: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		diagonal += mat[i][i];
	}
	
	printf("A soma dos valores da diagonal é: %d", diagonal);
	
	return 0;
}