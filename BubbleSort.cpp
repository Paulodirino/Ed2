#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void imprimeVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void troca(int v[], int a, int b) { // O(1)
    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

void bubbleSort(int v[], int n) { // O(n^2)
    int t=0;
    // Quantas vezes a comparação é executada em toda a linha
    for (int i = 0; i < n - t; i++) {
        // Comparação entre pares
        t++;
        printf("Total %d \n", t);
        for (int j = 0; j < n - 1; j++) {
            if (v[j] > v[j + 1]) {
                troca(v, j, j + 1);
                //imprimeVetor(v, n);

            }
        }
    }
}

void geraVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % n;
    }
}

int main() {

    srand(time(NULL));
    int n = 5;
    //int v[] = { 3, 1, 4, 5, 2 };

    //int v[] = { 5, 4, 3, 2, 1 };

    int v[n];


    geraVetor(v, n);

    imprimeVetor(v, n);
    bubbleSort(v, n);
    imprimeVetor(v, n);

    return 0;
}
