#include <stdio.h>
#include "mylen.h"

void main( ) {
    printf( "%d\n " , mylen( "abcde" ) );
    printf( "%d\n " , mycopy( "abcde" ) );
}

int mylen( char * s ) {
    int compteur = 0;
    while ( *s++ ) {
        compteur++;
    }
    return( compteur );
}

char * mycopy( char * s ) {
    int taille = mylen( s );
    char * newS = malloc( ( taille + 1 ) * sizeof( char ) );
    char * tmp = newS
        while ( *s++ ) {
            *tmp = *s;
        }
    *( tmp + 1 ) = '/0';
    printf( "s\n" , newS );
    return( newS );
}