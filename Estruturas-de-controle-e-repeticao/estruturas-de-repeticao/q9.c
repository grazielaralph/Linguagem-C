/*Calcular os valore de x e y onde a seguinte expressão
xy - x^2 + y tem valor máximo, a partir dos números naturais n e m tais que
x < m e y < n.*/

#include <stdio.h>

int main() {
    int m, n;
    int x_max = 0, y_max = 0;  
    int valor_max = -999999;   
    int resultado;

    
    printf("Insira o valor de m (limite superior de x): ");
    scanf("%d", &m);
    printf("Insira o valor de n (limite superior de y): ");
    scanf("%d", &n);

    
    for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++) {
            
            resultado = x * y - x * x + y;
            
            
            if (resultado > valor_max) {
                valor_max = resultado;
                x_max = x;
                y_max = y;
            }
        }
    }

    
    printf("O valor máximo da expressão foi %d com x = %d e y = %d\n", valor_max, x_max, y_max);

    return 0;
}
