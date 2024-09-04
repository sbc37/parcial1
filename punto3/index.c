#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

// Función para contar las ocurrencias de la palabra clave en una línea
int count_occurrences(const char *line, const char *key) {
    int count = 0;
    const char *ptr = line;

    while ((ptr = strstr(ptr, key)) != NULL) {
        count++;
        ptr += strlen(key);
    }

    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <archivo> <palabra_clave>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    const char *keyword = argv[2];
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    int total_count = 0;

    // Leer el archivo línea por línea
    while (fgets(line, sizeof(line), file) != NULL) {
        total_count += count_occurrences(line, keyword);
    }

    fclose(file);

    // Mostrar el resultado
    printf("La palabra '%s' se repite %d veces en el texto.\n", keyword, total_count);

    return 0;
}
