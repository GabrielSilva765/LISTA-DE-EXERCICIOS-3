#include <stdio.h>

int main() {
    int num, resto, invertido = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int original = num; 

    while (num != 0) {
        resto = num % 10;            
        invertido = invertido * 10 + resto; 
        num = num / 10;                   
    }

    printf("O número %d invertido é: %d\n", original, invertido);

    return 0;
}