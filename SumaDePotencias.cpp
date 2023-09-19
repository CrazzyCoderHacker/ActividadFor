#include <iostream>
#include <math.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 

{
	float i, ii=2, r, i_acum;
	
	for(i=1; i<=100;i++)
	{
		r= pow(i, ii);
	    i_acum+=r;
	}
	printf("La suma  total es: %f", i_acum);
	
	return 0;
}
