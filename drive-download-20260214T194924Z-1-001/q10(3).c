#include <stdio.h>

int main() {
    int p;

    // Entrada do valor de p
    printf("Insira o valor de p: ");
    scanf("%d", &p);

    // Loop para calcular os ímpares consecutivos para cada valor de n de 1 até p
    for (int n = 1; n <= p; n++) {
        int soma = 0;
        int primeiro_impar = n * n - n + 1;  // Fórmula para o primeiro ímpar da sequência

        // Exibe o valor de n^3 e os ímpares consecutivos
        printf("%d^3 = ", n);
        for (int i = 0; i < n; i++) {
            int impar_atual = primeiro_impar + 2 * i;  // Cada ímpar seguinte é 2 unidades maior que o anterior
            printf("%d", impar_atual);
            soma += impar_atual;

            if (i < n - 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", soma);
    }

    return 0;
}
