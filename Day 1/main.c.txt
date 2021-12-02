#include <stdio.h>

int main ( void ) {
	int r = 0, prev = 0, n;
	while ( scanf( "%d", &n ) == 1 ) {
		if ( !prev ) prev = n;
		if ( n > prev ) r++;
		prev = n;
	}
	printf ( "Measurements larger: %d\n", r );
	return 0;
}
