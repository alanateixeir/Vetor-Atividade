/*4. Crie um programa que tenha 2 vetores de 5 posições (vet_A, vet_B) e crie
um vetor resultante vet_C com 10 posições que receba vet_a nas primeiras 5 posições
e o vetor vet_B nas últimas 5 posições*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P 5
#define M 10
#include <time.h>

int main(){

    srand(time(NULL));
    int vetor1[P], vetor2[P], vetor3[M];
    int i;

    printf("Vetor A\n");
    for(i = 0; i < P; i++){
        vetor1[i] = rand()%10;
        printf("%d\n", vetor1[i]);
    }
    printf("-----------------------\n");
    printf("Vetor B\n");
    for(i = 0; i < P; i++){
        vetor2[i] = rand()%10;
        printf("%d\n", vetor2[i]);
    }
    printf("-----------------------\n");
    printf("Vetor C\n");
    for(i = 0; i < P; i++){
        vetor3[i] = vetor1[i];
        printf("%d\n", vetor3[i]);
    }
    for(i = 0; i < P; i++){
        vetor3[i] = vetor2[i];
        printf("%d\n", vetor3[i]);
    }
}