/*4. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres); ´
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring*/


#include <stdio.h>
#include <string.h>
#define MAX 20


void lerString(char *str, const char *mensagem) {
    printf("%s", mensagem);
    scanf("%s", str);
}


void imprimirTamanho(const char *str) {
    printf("Tamanho da string: %d\n", (int)strlen(str));
}


void compararStrings(const char *s1, const char *s2) {
    if (strcmp(s1, s2) != 0) {
        printf("%s e %s nao sao iguais.\n", s1, s2);
    } else {
        printf("%s e %s sao iguais.\n", s1, s2);
    }
}


void concatenarStrings(char *s1, const char *s2) {
    strcat(s1, s2);
    printf("Strings concatenadas: %s\n", s1);
}

void imprimirReversa(const char *str) {
    printf("%s ao contrario: ", str);
    for (int i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}


void contarCaractere(const char *str, char c) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            contador++;
        }
    }
    printf("O caractere '%c' aparece %d vezes em %s.\n", c, contador, str);
}

void substituirCaractere(char *str, char c1, char c2) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c1) {
            str[i] = c2;
            break;
        }
    }
    printf("String apos substituicao: %s\n", str);
}


void verificarSubstring(const char *s1, const char *s2) {
    if (strstr(s1, s2)) {
        printf("%s e uma substring de %s.\n", s2, s1);
    } else {
        printf("%s nao e uma substring de %s.\n", s2, s1);
    }
}

void criarSubstring(const char *s1, int posicao, int tamanho) {
    char substring[MAX] = {0};
    strncpy(substring, s1 + posicao, tamanho);
    substring[tamanho] = '\0'; // Garantir que a string seja terminada
    printf("Substring: %s\n", substring);
}

int main() {
    char s1[MAX], s2[MAX];
    char c1, c2;
    int posicao, tamanho;

    lerString(s1, "Digite uma palavra (S1): ");
    imprimirTamanho(s1);

    lerString(s2, "Digite outra palavra (S2): ");
    compararStrings(s1, s2);

    concatenarStrings(s1, s2);

    imprimirReversa(s1);

    getchar(); // Limpar buffer
    printf("Insira um caractere para contar em S1: ");
    scanf("%c", &c1);
    contarCaractere(s1, c1);

    getchar(); // Limpar buffer
    printf("Digite o caractere a ser substituido em S1: ");
    scanf("%c", &c1);
    getchar(); // Limpar buffer
    printf("Digite o novo caractere: ");
    scanf("%c", &c2);
    substituirCaractere(s1, c1, c2);

    lerString(s2, "Digite uma string para verificar se e substring de S1: ");
    verificarSubstring(s1, s2);

    printf("Informe a posicao para comecar a substring: ");
    scanf("%d", &posicao);
    printf("Informe o tamanho da substring: ");
    scanf("%d", &tamanho);
    criarSubstring(s1, posicao, tamanho);

    return 0;
}
