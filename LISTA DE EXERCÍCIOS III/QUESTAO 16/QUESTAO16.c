#include <stdio.h>

int main(){
	
	int mat[3][3];
	int i, j;
	int somaD1=0, somaD2=0;
	int l1=0, l2=0, l3=0, c1=0, c2=0, c3=0;
	
	printf("Informe os valores inteiros da matriz: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Valor[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}	
	}
	for(i=0; i<3; i++){
		somaD1 += mat[i][i];
	}
	for(i=0; i<3; i++){
		somaD2 += mat[i][3-i-1];
	}
	
	l1= mat[0][0]+mat[0][1]+mat[0][2];
	l2= mat[1][0]+mat[1][1]+mat[1][2];
	l3= mat[2][0]+mat[2][1]+mat[2][2];
	
	c1= mat[0][0]+mat[1][0]+mat[2][0];
	c2= mat[0][1]+mat[1][1]+mat[2][1];
	c3= mat[0][2]+mat[1][2]+mat[2][2];
	
	if (l1 == l2 && l2 == l3 && l3 == c1 && c1 == c2 && c2 == c3 && c3 == somaD1 && somaD1 == somaD2){
		printf("É um quadrado mágico.");
	}else{
		printf("Não é um quadrado mágico.");
	}
	
	return 0;
}