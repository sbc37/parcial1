PUNTO 1 
Objetivo del Programa: Implementar un programa en AWK que evalúe un archivo de texto (token.txt) usando un AFD (Autómata Finito Determinista) para identificar y devolver tokens basados en las expresiones regulares dadas.

Expresiones Regulares:

+: Coincide con uno o más caracteres +.
++: Coincide con dos o más caracteres +.
[0-9]+: Coincide con uno o más dígitos del 0 al 9.
([0-9]+)”.”([0-9])+: Coincide con números decimales con al menos un dígito antes y después del punto decimal.
Entrada y Salida:

Entrada: Un archivo de texto (token.txt) que contiene los tokens a evaluar.
Salida: El programa imprimirá los tokens que coincidan con las expresiones regulares definidas.
Ejecución del Programa: El programa AWK debe ser ejecutado con el archivo de texto como parámetro desde la consola, como se muestra en el ejemplo token.awk -f token.txt.

PUNTO 2 

Conclusiones
Función lambda en Python: La implementación en LEX permite identificar y verificar la presencia de una expresión lambda en un archivo de código Python. La expresión lambda es una forma concisa de definir funciones anónimas en Python, y nuestra gramática y código en LEX verifican si se encuentra una definición de lambda y una llamada a print.

Implementación en LEX: El código LEX que proporcionamos identifica tokens específicos relacionados con las expresiones lambda y los declara en una variable. Luego, verifica si ambos, la expresión lambda y la declaración de print, están presentes en el archivo de entrada.

Flexibilidad y Extensibilidad: Este enfoque básico verifica la presencia de las palabras clave y tokens importantes pero no realiza una validación completa de la sintaxis de las expresiones lambda. Para una validación completa, se requeriría un análisis más detallado de la estructura y la gramática.

Ejemplos de Prueba: Proporcionar un archivo de texto de entrada con una expresión lambda y una declaración print permite verificar que el programa funciona correctamente. Si se encuentran ambos elementos, el programa imprime ACEPTA; si falta alguno, imprime NO ACEPTA.

Cómo Ejecutar el Programa
Aquí está una guía paso a paso para ejecutar el programa LEX que implementa la verificación de expresiones lambda:

Guardar el Código LEX

Guarda el código LEX proporcionado en un archivo llamado lambda.l.

Generar el Código C con Flex

Abre una terminal y navega al directorio donde guardaste lambda.l. Luego, ejecuta:

flex lambda.l

Esto generará un archivo lex.yy.c que contiene el código C generado por Flex.

Compilar el Código C

En la misma terminal, compila el código C generado con GCC:gcc lex.yy.c -o a.out -lfl
Aquí, -lfl enlaza con la biblioteca Flex.

Ejecutar el Programa

Ejecuta el programa compilado pasando el archivo de texto como argumento:

./a.out archivo.txt
Dependiendo de si el archivo contiene una expresión lambda y una instrucción print, el programa imprimirá:

ACEPTA si ambos elementos están presentes.
NO ACEPTA si falta alguno de los elementos esperados.

PUNTO3

Conclusiones del Código
Eficiencia: El programa lee el archivo línea por línea y busca la palabra clave en cada línea usando strstr, lo que es eficiente para archivos de tamaño moderado. La búsqueda se realiza en tiempo lineal con respecto al tamaño del archivo y la longitud de la palabra clave.

Robustez: El programa maneja casos en los que el archivo no puede abrirse correctamente y muestra un mensaje de error en caso de que haya problemas. Sin embargo, no maneja otros posibles problemas como archivos extremadamente grandes que podrían no caber en memoria o palabras clave que podrían contener caracteres especiales.

Uso: Es necesario proporcionar el nombre del archivo y la palabra clave como parámetros de línea de comandos. El programa es simple de usar y proporciona una salida clara que indica cuántas veces aparece la palabra clave en el archivo.

Ejecución del Programa
Para ejecutar el programa en tu entorno, sigue estos pasos:

Guarda el Código: Guarda el código en un archivo llamado miprograma.c.

Compila el Programa: Abre una terminal y navega al directorio donde guardaste miprograma.c. Luego, compila el programa con el siguiente comando:
gcc -o miprograma miprograma.c

Prepara un Archivo de Texto: Crea un archivo de texto de ejemplo, por ejemplo, archivo.txt, con contenido que incluya la palabra clave que deseas buscar.

Ejecuta el Programa: Ejecuta el programa usando el comando:./miprograma lista.txt arroz

Verifica el Resultado: El programa mostrará el número de veces que la palabra clave aparece en el archivo.

PUNTO 4 

Rendimiento:

C: Generalmente, los programas en C serán más rápidos debido a la naturaleza compilada del lenguaje y la gestión eficiente de la memoria. C tiene menos sobrecarga de ejecución en comparación con Python.
Python: Aunque más accesible y más fácil de escribir, Python puede ser significativamente más lento debido a su naturaleza interpretada y su mayor sobrecarga de ejecución.
Uso de Recursos:

C: El uso de memoria y CPU en C suele ser más eficiente. Los programas en C tienen un mayor control sobre la gestión de memoria y la optimización del código.
Python: El manejo de memoria y recursos en Python está más abstraído y gestionado automáticamente, lo que puede llevar a una mayor sobrecarga.
Desarrollo y Mantenimiento:

C: El desarrollo en C puede ser más propenso a errores y requiere una mayor atención a la gestión de memoria y otros detalles del sistema.
Python: La programación en Python es más rápida y conveniente, lo que puede ser más beneficioso en proyectos donde el tiempo de desarrollo es crucial.
Ambos lenguajes tienen sus propios puntos fuertes y casos de uso, y la elección entre C y Python dependerá de las necesidades específicas del proyecto, como el rendimiento versus la facilidad de desarrollo.

Ejecutar los Programas

Primero, ejecuta el programa en C:
./quicksort

python3 quicksort.py



