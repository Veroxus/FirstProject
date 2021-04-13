#include <stdio.h>
#include <stdlib.h>

/*
 *Author: Aidan Corcoran
 *Program Name: daysCalculatorA
 *Function: Determine the difference between two dates
*/

int calculator (int a, int b, int c, int d, int e, int f);

int main ( int argc, char *argv[]) {

  if ( argc < 7 ) {
    printf ( "Error - correct format, dd1 mm1 yyyy1 dd2 mm2 yyyy2\n" );
    exit ( 1 );
  }

  int doy[12] = { 1, 32, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 };
  int doyly[12] = { 1, 32, 61, 92, 122, 153, 183, 214, 245, 275, 306, 336 };

    int dd1 = 0;
    int mm1 = 0;
    int yyyy1 = 0;
    int dd2 = 0;
    int mm2 = 0;
    int yyyy2 = 0;

    dd1 = atoi ( argv[1] );
    mm1 = atoi ( argv[2] );
    yyyy1 = atoi ( argv[3] );
    dd2 = atoi ( argv[4] );
    mm2 = atoi ( argv[5] );
    yyyy2 = atoi ( argv[6] );

    printf ("%d\n", calculator(dd1, mm1, yyyy1, dd2, mm2, yyyy2));

return ( 0 );

}
