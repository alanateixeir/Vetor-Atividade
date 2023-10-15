/*5. Crie um programa que crie um vetor de 10 posições e preencha com valores inteiros. 
Crie um segundo valor que será preenchido com os valores pares.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10
#include <time.h>

int main(){

    srand(time(NULL));
    int vetor1[M], vetor2[M];
    int i;

    printf("Vetor A\n");
    for(i = 0; i < M; i++){
        vetor1[i] = rand()%20+1;
        printf("%d\n", vetor1[i]);
    }
    printf("-----------------------\n");
    printf("Vetor com os numeros pares:\n");
    for(i = 0; i < M; i++){
        if(vetor1[i] % 2 == 0){
            vetor2[i] =  vetor1[i];
            printf("%d\n", vetor2[i]);        
        }
    }
}