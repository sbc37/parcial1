#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para intercambiar dos elementos
void intercambiar(int *a, int *b) {
    //Variable temporal
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función para particionar el array
int particionar(int arr[], int bajo, int alto) {
    int pivote = arr[alto]; // Seleccionar el pivote (último elemento en este caso)
    int i = bajo - 1; // Índice del elemento menor

    //Ciclo for 
    for (int j = bajo; j < alto; j++) {
        if (arr[j] < pivote) {
            i++;
            intercambiar(&arr[i], &arr[j]);
        }
    }
    intercambiar(&arr[i + 1], &arr[alto]);
    return i + 1;
}

// Función de Quicksort
void quicksort(int arr[], int bajo, int alto) {
    //Límite superior y límite inferior
    if (bajo < alto) {
        //particiones del array
        int pi = particionar(arr, bajo, alto); // Particionar el array
        quicksort(arr, bajo, pi - 1); // Ordenar la parte izquierda
        quicksort(arr, pi + 1, alto); // Ordenar la parte derecha
    }
}

// Función para imprimir el array
void imprimirArray(int arr[], int tamaño) {
    //Recorrer el array
    for (int i = 0; i < tamaño; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Tamaño del array
    int tamaño = 10000;
    //malloc -> Memoria dinámica
    int *array = (int *)malloc(tamaño * sizeof(int));
    //El array está vació
    if (array == NULL) {
        printf("Error de asignación de memoria\n");
        return 1;
    }

    // Inicializar el array con valores aleatorios
    srand(time(0));
    //Generar los valores
    for (int i = 0; i < tamaño; i++) {
        array[i] = rand() % 10000;
    }

    // Medir el tiempo de inicio antes de ordenar el array
    clock_t inicio = clock();
    // Ordenar el array usando el algoritmo Quicksort
    quicksort(array, 0, tamaño - 1);
    // Medir el tiempo de fin después de ordenar el array
    clock_t fin = clock();
    
    // Calcular y mostrar el tiempo de ejecución
    double tiempo_transcurrido = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", tiempo_transcurrido);

    free(array);
    return 0;
}
