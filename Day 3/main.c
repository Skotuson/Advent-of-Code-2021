#include <stdio.h>

#define BIN_LEN 12

int main ( void ) {
    int gamma = 0, epsilon = 0;
    int digits [BIN_LEN] = {};
    char c; 
    int i = 0;
    
    while ( scanf ( "%c", &c ) == 1 ) {
        if ( c == '\n' ) continue;
        if ( c - '0' ) digits[ i ]++;
        else digits[ i ]--;
        if ( ++i == 12 )
            i = 0;
    }

    int power = 1;
    for ( int i = BIN_LEN - 1; i >= 0; i-- ) {
        if ( digits[ i ] > 0 ) digits [ i ] = 1;
        else digits [ i ] = 0;
        gamma += digits[ i ] * power;
        epsilon += !digits[ i ] * power;
        power *= 2;
    }
    printf( "Power consumption: %d\n", gamma * epsilon );
    return 0;
}