#include <stdio.h>
#include "mylen.h"

int main( ) {
    printf( "%d"\n , mylen( "abcde" ) )
}

int mylen( char * s ) {
    int compteur = 0;
    while ( *s++ ) {
        compteur++
    }
    return( compteur )
}