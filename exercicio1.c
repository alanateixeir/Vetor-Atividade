/*1. Crie um programa que preencha um vetor de 5 posições e:

      a) imprima a soma de todos os valores;
      b) imprima apenas os valores pares;
      c) imprima o maior e o menor valor do vetor;
      d) imprima o dobro de todos os valores;
      e) imprima a raiz quadrada dos valores ímpares;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P 5
#include <time.h>

int main(){

    srand(time(NULL));

    int vetor[P], i, r=0, r1=0, maior=0, menor=1;
    float vetor2[P];

    for(i = 0; i < P; i++){
        vetor[i] = rand()%10;
        printf("%d\n", vetor[i]);
        r += vetor[i];

        if(vetor[i]>maior){
            maior = vetor[i];
        }

        else if(vetor[i]<menor){
            menor = vetor[i];
        }
        
    }

//A)
    printf("\nA soma de todos os numeros  = %d\n\n", r);

//B
    printf("Os numeros pares sao:\n");
    for (i = 0; i < P; i++){
    
        if(vetor[i] %2 == 0){
            printf("%d\n", vetor[i]);
        }
   }
   
//C
    printf("\nMaior: %d \nMenor : %d.\n", maior, menor);

//D
    printf("\nO dobro dos numeros sao:\n");
    for (i = 0; i < P; i++){
        r1 = vetor[i]*2;
            printf("%d\n", r1);
    }

//E
    printf("\nAs raizes quadradas sao:\n");
    for (i = 0; i < P; i++){
        vetor2[i] = sqrt(vetor[i]);
        printf("\n%g", vetor2[i]);
    }

}
