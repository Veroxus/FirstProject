#include <stdio.h>
#include <stdlib.h>

/*
 *Author: Aidan Corcoran
 *Program Name: daysCalculatorA
 *Function: Determine the difference between two dates
*/

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
    int startday = 0;
    int endday = 0;
    int answer = 0;
    int answer1 = 0;
    int lystart = 0;
    int lyend = 0;
    int lyanswer = 0;

    dd1 = atoi ( argv[1] );
    mm1 = atoi ( argv[2] );
    yyyy1 = atoi ( argv[3] );
    dd2 = atoi ( argv[4] );
    mm2 = atoi ( argv[5] );
    yyyy2 = atoi ( argv[6] );

  if ( mm1 > mm2 && dd1 > dd2 ) {
    printf ( "Error - start date occurs after the end date\n" );
    exit ( 1 );
  }

  startday = doy[mm1-1] + dd1;
  endday = doy[mm2-1] + dd2;
  answer = endday - startday;
  lystart = doyly[mm1-1] + dd1;
  lyend = doyly[mm2-1] + dd2;
  lyanswer = lyend - lystart;

  if ( argc == 8 && strcmp (argv[7], "include" ) == 0 && yyyy1 % 4 == 0 && yyyy2 % 4 == 0 && yyyy1 % 100 != 0 && yyyy2 % 100 != 0 || yyyy1 % 400 == 0 && yyyy2 % 400 == 0 && yyyy1 % 100 != 0 && yyyy2 % 100 != 0 ) {
    printf ( "%d\n", lyanswer +1 );
    exit ( 1 );
  }

  if ( argc == 8 && strcmp (argv[7], "include" ) == 0 ) {
    answer1 = answer +1;
    printf ( "%d\n", answer1 );
    exit ( 1 );
  }
  if ( yyyy1 % 4 == 0 && yyyy2 % 4 == 0 && yyyy1 % 100 != 0 && yyyy2 % 100 != 0 || yyyy1 % 400 == 0 && yyyy2 % 400 == 0 && yyyy1 % 100 != 0 && yyyy2 % 100 != 0 ) {
    printf ( "%d\n", lyanswer );
    exit ( 1 );
  }

printf ( "%d\n", answer );

return ( 0 );

}
