#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void imprimeVetor(int v[]) {
    for (int i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void troca(int v[], int a, int b) { // O(1)
    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

void bubbleSort(int v[]) { // O(n^2)
    // Quantas vezes a comparação é executada em toda a linha
    for (int i = 0; i < 3 - 1; i++) {
        // Comparação entre pares
        for (int j = 0; j < 3 - 1; j++) {
            if (v[j] > v[j + 1]) {
                troca(v, j, j + 1);
                //imprimeVetor(v, n);
            }
        }
    }
}


int main() {

int v[3];
int vet[3];

scanf("%d",&v[0]);
scanf("%d",&v[1]);
scanf("%d",&v[2]);
vet[0] = v[0];
vet[1] = v[1];
vet[2] = v[2];

    //srand(time(NULL));



    bubbleSort(v);
    imprimeVetor(v);
    imprimeVetor(vet);

    return 0;
}
