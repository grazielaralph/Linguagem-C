#include <stdio.h>

int main (){
    char letra;

    printf("Insira uma letra: ");
    scanf ("%c", &letra);

    letra = letra - 32;

    printf("%c\n", letra);
}