#include <stdio.h>

int main(){
	
	int mat[3][3], i, j;
	int soma1=0, soma2=0, soma3=0, maiorsoma=0, l=0;
	
	printf("Informe os valores inteiros da matriz: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}	
  /*soma1 = mat[0][0]+mat[0][1]+mat[0][2];
	soma2 = mat[1][0]+mat[1][1]+mat[1][2];
	soma3 = mat[2][0]+mat[2][1]+mat[2][2];*/

	for(i=0; i<3; i++){
		soma1 += mat[0][i];
	}
	for(i=0; i<3; i++){
		soma2 += mat[1][i];
	}
	for(i=0; i<3; i++){
		soma3 += mat[2][i];
	}
	
		
	if(soma1>soma2 && soma1>soma3){
		maiorsoma=soma1;
		l=0;
	}else if(soma2>soma1 && soma2>soma3){
		maiorsoma=soma2;
		l=1;
	}else if(soma3>soma1 && soma3>soma2){
		maiorsoma=soma3;
		l=2;
	}
	printf("A linha com a maior soma é a linha %d com o resultado de %d", l, maiorsoma);
	return 0;
}