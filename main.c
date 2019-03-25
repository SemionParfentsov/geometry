#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{ int x,y;
  double R;  
    printf ("circle( ");
    scanf ("%d %d",&x,&y);
    printf (",");
    scanf ("%lf", &R);
    printf (")");
    printf ("circle (%d %d,%lf)", x, y, R);
    system ("PAUSE");
    return 0;
}
    
