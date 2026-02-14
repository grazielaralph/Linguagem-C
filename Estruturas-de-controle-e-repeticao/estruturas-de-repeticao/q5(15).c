#include <stdio.h>

int main() {
    float num, den, soma = 0;  
    
    for(num = 1, den = 1; num <= 99 && den <= 50; num += 2, den++) {
        soma += num / den;  
        printf("\n%.0f / %.0f", num, den);
    }

    printf("\nSoma: %.2f\n", soma); 

    return 0;
}
