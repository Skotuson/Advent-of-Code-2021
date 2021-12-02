#include <stdio.h>
#include <string.h>

int main ( void ) {
	char mov[8];
	int n, aim = 0, d = 0, f = 0;
	while ( scanf ( "%s %d", mov, &n ) == 2 ) {
		 if ( !strcmp ( "forward", mov ) ) {
		 	f += n;
		 	d += aim * n; 
		 } 
		 else if ( !strcmp ( "down", mov ) )
		 	aim += n;
		 else if ( !strcmp ( "up", mov ) ) 
		 	aim -= n;
	} 
	printf ( "Res: %d\n", d * f ) ;
	return 0;
}