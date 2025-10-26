#include <stdio.h>

int main(){
	int qtdNum, i;
	int somapar = 0, somaimpar = 0;
		
	printf("Informe a quantidade de números que será digitada: ");
	scanf("%d", &qtdNum);
	
	int num[qtdNum];
	
	for (i = 0; i < qtdNum; i++){
		printf("Digite o número %d: ", i + 1);
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < qtdNum; i++) {
        if (num[i] % 2 == 0) {
            somapar += num[i];
        } else {
            somaimpar += num[i];
        }
    }
	
	printf("A soma dos números pares é: %d\n", somapar);
	printf("A soma dos números ímpares é: %d", somaimpar);
	
	return 0;
}