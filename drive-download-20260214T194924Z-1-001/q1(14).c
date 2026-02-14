#include <stdio.h>
#include <math.h>  // Para usar a função sqrt() e fabs()

int main() {
    double y;  // O número para o qual vamos calcular a raiz quadrada
    double x, x_next;  // Aproximações atuais e futuras
    double epsilon = 0.1;  // Critério de parada
    int iteracoes = 0;  // Contador de iterações

    // Entrada do número para calcular a raiz quadrada
    printf("Insira um número positivo para calcular a raiz quadrada: ");
    scanf("%lf", &y);

    if (y < 0) {
        printf("O número deve ser positivo.\n");
        return 1;
    }

    // Primeira aproximação
    x = y / 2.0;

    // Iterações usando o método de Newton-Raphson
    do {
        x_next = x - (x * x - y) / (2.0 * x);  // Fórmula de recorrência
        iteracoes++;
        x_next=x;
    } while (fabs(x_next - x) >= epsilon);  // Critério de parada: diferença menor que epsilon

    // Comparação com a função sqrt() da biblioteca math.h
    double raiz_exata = sqrt(y);

    // Saída dos resultados
    printf("\nRaiz quadrada aproximada de %.2lf: %.5lf\n", y, x_next);
    printf("Raiz quadrada usando sqrt(): %.5lf\n", raiz_exata);
    printf("Número de iterações: %d\n", iteracoes);

    return 0;
}
