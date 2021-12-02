#include <stdio.h>
#include <string.h>

int main ( void ) {
	char mov[8];
	int n, d = 0, f = 0;
	while ( scanf ( "%s %d", mov, &n ) == 2 ) {
		 if ( !strcmp ( "forward", mov ) )
		 	f += n;   
		 else if ( !strcmp ( "down", mov ) )
		 	d += n;
		 else if ( !strcmp ( "up", mov ) ) 
		 	d -= n;
	} 
	printf ( "Res: %d\n", d * f ) ;
	return 0;
}
