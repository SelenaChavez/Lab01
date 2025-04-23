
Función: **fstring_length()**
### ¿QUÉ?
 Devuelve la longitud de la cadena guardada en el parámetro s
### ¿CÓMO?
 Recorre la cadena (como se recorre un array) hasta su último elemento ('/0') y devuelve el valor de la cantidad de iteraciones que se hicieron, menos una
### IMPLEMENTACIÓN (ojo que la recontra arreglé en el .c)
    unsigned int length;
    for ( unsigned int i==0, s[i] != "/0", i++ ) {
    skip; ???
    }
    length = i-1
    return length

**quedó así:**

unsigned int fstring_length(fixstring s) {
unsigned int length = 0;
for ( unsigned int i=1; s[i] == '\0'; i++ ) {
    length = i;
}
return length;
}



Función: **fstring_eq()**
### ¿QUÉ?
 Indica si las cadenas s1 y s2 son iguales (contienen los mismos char, en el mismo orden)
### ¿CÓMO?
 Se inicia un parámetro true, compara cada elemento, uno a uno, recorriendo ambos strings al mismo tiempo, si alguno es distinto, cambia el valor del parámetro, corta la comparación y devuelve dicho parámetro
### IMPLEMENTACIÓN (ojo que la recontra arreglé en el .c)
    bool eq = true;
    for ( unsigned int i=0, s1(i) == s2(i), i++) {
        skip;
    } 
    if (terminó de recorrer ambos strings) {listo} else {
        eq = false;
    }
    }
    return eq

**quedó así:** 

bool fstring_eq(fixstring s1, fixstring s2) {
unsigned int length_1 = fstring_length (s1);
unsigned int length_2 = fstring_length (s2);
if ( length_1 == length_2 ) { 
    for ( unsigned int i=0; i <= length_1; i++ ) {
        if ( s1[i] != s2[i] ) {
            eq = false;
        }
    }
} else {
    eq = false;
}
return eq;
}



Función: **fstring_less_eq()**
### ¿QUÉ?
 Indica si la cadena guardada en s1 es menor o igual que la guardada en s2 en el sentido
del orden alfabético. O sea, si va antes en el diccionario
### ¿CÓMO?
Primero uso la función anterior, si es igual ya está, se corta. Si no, voy recorriendo s1; si cada elemento es menor o igual, pasas a comparar el siguiente. Si no se cumple lo anterior, less_eq pasa a ser falso y se corta. Termino de recorrer el arreglo y devuelvo less_eq

### IMPLEMENTACIÓN
    bool fstring_less_eq(fixstring s1, fixstring s2) {
    bool less_eq = true;
    unsigned int length_1 = fstring_length (s1);
    unsigned int length_2 = fstring_length (s2);
    if ( fstring_eq (s1,s2) == true ) {
    } else {
        if ( length_1 <= length_2 ) { 
            for ( unsigned int i=0; i <= length_1 && les_eq == true; i++ ) {
                if ( s1[i] > s2[i] ) {
                    less_eq = false;
                }
        }
    }    
    return eq;
    }
    }

**quedó así:**

bool fstring_less_eq(fixstring s1, fixstring s2) {
bool less_eq = true;
unsigned int length_1 = fstring_length (s1);
unsigned int length_2 = fstring_length (s2);
if ( fstring_eq (s1,s2) == true ) {
} else {
    if ( length_1 <= length_2 ) { 
        for ( unsigned int i=0; i <= length_1 && less_eq == true; i++ ) {
            if ( s1[i] > s2[i] ) {
                less_eq = false;
            }
        }
    }
}        
return less_eq;
}

 