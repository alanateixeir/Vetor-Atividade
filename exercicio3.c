/*3. Crie um programa que tenha 3 vetores de 5 posições (vet_A, vet_B e vet_C).
O vetor vet_C é a soma dos vetores vet_A + vet_B. Mostre vet_C.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P 5
#include <time.h>

int main(){

    srand(time(NULL));
    int vetor1[P], vetor2[P], vetor3[P];
    int i;

    printf("Vetor A\n");
    for(i = 0; i < P; i++){
        vetor1[i] = rand()%10;
        printf("%d\n", vetor1[i]);
    }
    printf("-----------------------\n");
    printf("Vetor B\n");
    for(i = 0; i < P; i++){
        vetor2[i] = rand()%10+10;
        printf("%d\n", vetor2[i]);
    }
    printf("-----------------------\n");
    printf("Soma do vetor A e B\n");
    for(i = 0; i < P; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("%d\n");
    }
}
