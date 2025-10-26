#include <stdio.h>

int main(){
	
	int mat[4][4];
	int i, j, maior;
	
	printf("Digite os valores inteiros da matriz: \n");
	for (i=0; i<4; i++){
		for(j=0; j<4;j++){
			printf("Matriz[%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for (i=0; i<4; i++) {
        maior = mat[i][0]; 
        for (j=0; j<4; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        printf("Linha %d: %d\n", i, maior);
    }
	
	return 0;
}