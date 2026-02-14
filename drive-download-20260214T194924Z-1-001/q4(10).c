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

int main(){
    char s1[MAX], s2[MAX];
    printf ("Digite uma palavra: ");
    scanf ("%s", s1);

    //tamanho da primeira
    printf("Tamanho da primeira string: %d\n", strlen(s1));
    
    //entrada da segunda palavra
    printf("Digite outra palavra: ");
    scanf ("%s", s2);

    //comparacao
    if(strcmp(s1, s2)!=0){
        printf("%s e %s nao sao iguais\n", s1, s2);
    }else{
        printf("%s e %s sao iguais\n", s1, s2);
        
    }

    
    //inverso de s1
    int n_s1 = strlen(s1);
    printf("%s ao contrario: ", s1);
    for(int i=n_s1-1; i>=0; i--){
        printf("%c", s1[i]);   
    }
    printf("\n");

    //contando caracter tal 
    int qtdC=0;
    char c;

    getchar();
    printf("Insira um caracter:");
    scanf("%c", &c);

    for (int i=0; i<n_s1; i++){
        if(c==s1[i]){
            qtdC++;
        }
    }

    printf ("%c aparece %d vezes em %s\n", c, qtdC, s1);




    //concatenacao das duas
    strcat(s1, s2);
    printf("Concatenadas: %s", s1);





    return 0;
}