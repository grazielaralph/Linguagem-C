/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.*/

#include <stdio.h>
#define TAMANHO 100

void verificaFaces(int v[], int qtd);

int main(){
    int v[TAMANHO], nFaces=101;

    while(nFaces>100){
        printf("Digite a quantidade de vezes que o dono do cassino rolou o dado:");
        scanf("%d", nFaces);
        if(nFaces>100){
            printf("Quantidade invalida. Tente novamente!");
        }
    }

    for (int i = 0; i<nFaces; i++){
        printf("%d vez: ", nFaces+1);
        scanf("%d", v[i]);
    }
    
    verificaFaces(v, nFaces);
    
    return 0;
}

void verificaFaces(int v[], int qtd){
    int qtdFaces[2][6]; //matriz para mostrar quantas vezes caiu cada face

    //inserindo os valores da primeira linha (no caso, as faces )
    for (int i=0; i<6; i++){
        for (int j=0; j<1; j++){
            qtdFaces[j][i]=i;
        }
    }

    //verificando os valores sorteados
    for (int i=0; i<qtd; i++){
        
    }



}