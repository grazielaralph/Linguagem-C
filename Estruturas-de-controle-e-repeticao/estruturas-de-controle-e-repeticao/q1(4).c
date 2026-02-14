#include <stdio.h>

int main() {
    int num, soma = 0; // Variável para armazenar a soma e a leitura do número
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &num); // Lê um número
        soma += num; // Adiciona o número à soma
    }

    printf("A soma dos cinco números é: %d\n", soma);
    return 0;
}
