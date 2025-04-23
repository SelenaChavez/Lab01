#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s) {
unsigned int length = 0;
for ( unsigned int i=1; s[i] != '\0'; i++ ) {
    length = i-1;
}
return length;
}


bool fstring_eq(fixstring s1, fixstring s2) {
bool eq = true;
unsigned int length_1 = fstring_length (s1);
unsigned int length_2 = fstring_length (s2);
if ( length_1 == length_2 ) { 
    for ( unsigned int i=0; i <= length_1 && eq == true; i++) {
        if ( s1[i] != s2[i] ) {
            eq = false;
        }
    }
} else {
    eq = false;
}
return eq;
}

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
    } else {
        less_eq = false;
    }
}        
return less_eq;
}

