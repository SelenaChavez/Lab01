### PARTES A Y B
- Implementar **selection_sort** e **insertion** usando **goes_before**
- Indexar desde 0 
- Que se imprima el arreglo en cada paso intermedio, como cuando lo ejecutás a mano, con **array_dump**
- Crear un archivo con un arreglo para ordenarlo con el algoritmo

### PARTE C
- Agregar invariante con **assert** y **array_is_sorted**


### Situación actual 1
Hice las 3 partes, compila pero me imprime algo que nada que ver. Además no hice lo de "indexar desde 0". Ir aprendiendo y usando GDB para detectar qué está fallando


### El main...
-Apunta al primer elemento del string que ingresa
-Le asigna a length el elemento de la primer línea, el largo del arreglo 
-Crea un arreglo **array** con los elementos de la segunda línea
-Hace una copia de dicho arreglo para usarla después (supongo que en el invariante)
-Ordena el arreglo con **insertion_sort**
    
-Imprime el arreglo ordenado
-Se asegura de que el arreglo esté ordenado y de que es permutación del ingresado, con **assert**, si no, salta un error

### Situación actual 2
Resolví el ej1, me volví loca con GDB porque me tiraba numeros que nada que ver, y resulta que simplemente lo estaba ejecutando mal :) puto "../"
NO funciona para un arreglo vacío, ver que pedo, seguro es un if en alguna parte, un caso base o algo así


