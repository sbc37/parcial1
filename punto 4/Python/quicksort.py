import random
import time

def quicksort(arr):
    """Ordena el array usando el algoritmo Quicksort."""
    if len(arr) <= 1:
        # Caso base: Si el array tiene uno o cero elementos, ya está ordenado.
        return arr
    else:
        # Seleccionar el pivote (en este caso, el elemento del medio del array).
        pivote = arr[len(arr) // 2]
        # Dividir el array en tres partes:
        # 1. Elementos menores que el pivote.
        izquierda = [x for x in arr if x < pivote]
        # 2. Elementos iguales al pivote.
        medio = [x for x in arr if x == pivote]
        # 3. Elementos mayores que el pivote.
        derecha = [x for x in arr if x > pivote]
        # Ordenar recursivamente las partes izquierda y derecha, y concatenar con la parte del pivote.
        return quicksort(izquierda) + medio + quicksort(derecha)

def main():
    # Tamaño del array
    tamaño = 10000
    # Crear un array de tamaño números enteros aleatorios entre 0 y 10000.
    array = [random.randint(0, 10000) for _ in range(tamaño)]
    
    # Medir el tiempo de inicio antes de ordenar el array.
    tiempo_inicio = time.time()
    # Ordenar el array usando el algoritmo Quicksort.
    array_ordenado = quicksort(array)
    # Medir el tiempo de fin después de ordenar el array.
    tiempo_fin = time.time()
    
    # Calcular el tiempo transcurrido en segundos.
    tiempo_transcurrido = tiempo_fin - tiempo_inicio
    # Mostrar el tiempo de ejecución del algoritmo Quicksort.
    print(f"Tiempo de ejecución: {tiempo_transcurrido:.6f} segundos")

# Ejecutar la función main si el script se ejecuta directamente.
if __name__ == "__main__":
    main()
