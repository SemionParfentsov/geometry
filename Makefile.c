#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int N1,N2,N3,R,K;
	K=0;
	printf ("Vvedite N1");
	scanf ("%d",&N1);
	K++;
	printf ("Vvedite N2");
	scanf ("%d",&N2);
	K++;
	printf ("Vvedite N3 or Vvedite 0");
	scanf ("%d",&N3);
	if (N3 > 0)
       	K++;
	printf ("Vvedite R");
	scanf ("%d",&R);
	if (R == 0)
		printf ("It's not circle!");
	else 
		printf ("wait pliase");
	if (K > 2)
		printf ("It's Triangle");
	else 
		printf ("It's Circle");
	return 0;
	system ("PAUSE"); 
}
