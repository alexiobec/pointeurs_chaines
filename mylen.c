#include <stdio.h>
#include "mylen.h"
#include <stdlib.h>

void main( ) {
    char * alphabet = "abcde";
    //printf( "%d\n " , mylen( mycopy( alphabet ) ) );
    //printf( "original : %p \ncopie : %p \n " , &alphabet , mycopy( alphabet ) );
    //printf( "ma copie en str donne :" );
    //myprint( mycopy( alphabet ) );
    //printf( "compte de e dans aebecedeee : %d\n" , comptage( "aebecedeee" , 'e' ) );
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
    int i = 0;
    //printf( "taille = %d\n" , taille );
    char * newS = malloc( ( taille + 1 ) * sizeof( char ) );
    //char * memoire = newS;
    while ( *( s + i ) ) {
        *( newS + i ) = *( s + i );
        //printf( "*newS = %c , *memoire = %c\n" , *newS , *memoire );
        i++;
    }
    *( newS + i + 1 ) = *"\0";
    return( newS );
}

void myprint( char * s ) {
    while ( *s ) {
        printf( "%c" , *s );
        s++;
    }
    printf( "\n" );
}


int comptage( char * mot , char lettre ) {
    int compte = 0;
    while ( *mot ) {
        if ( *mot == lettre ) {
            compte++;
        }
        *mot++;
    }
    return compte;
}

char * remplacer( char * mot , char lettre ) {
    char * copie = mycopy( char * mot );
    *copie = lettre;
    return( copie );
}