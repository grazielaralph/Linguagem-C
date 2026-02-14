/*A partir de um número inteiro positivo n. Determinar os inteiros entre 1 e n
que são comprimento da hipotenusa de um triângulo retângulo com catetos
inteiros.*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Entrada do valor de n
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    printf("Hipotenusas possíveis entre 1 e %d:\n", n);

    // Percorre todos os valores possiveis de c (hipotenusa)
    for(int c = 1; c <= n; c++) {
        // Testa todos os pares de a e b
        for(int a = 1; a < c; a++) {
            for(int b = a; b < c; b++) {  // b >= a para evitar duplicação de pares
                if(a * a + b * b == c * c) {  // Verifica se satisfaz o teorema de Pitágoras
                    printf("Hipotenusa: %d (catetos %d e %d)\n", c, a, b);
                }
            }
        }
    }

    return 0;
}
