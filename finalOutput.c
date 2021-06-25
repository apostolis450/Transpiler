#include "mslib.h"


const double N = -100;
 double a, b;

double  cube(double i ) { 
	return i * i * i;
}
double  add(double n, double k ) {

 double j;

	
	 j = (N - n) + cube(k) ;
	 writeNumber(j);
	 
	return j;
}

void  main() {

	
	 a = readNumber() ;
	 b = readNumber() ;
	 add(a , b);
}
/* 
Accepted!
 */