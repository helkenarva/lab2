#include <stdio.h>
#include <math.h>
void qwrt(int a, int b, int c)
{
    int d, x1, x2;
    d = b*b - 4*a*c;
	if( d < 0 )
    {
        printf ("\nNo roots\n");
    }
    else if( d == 0 )
    {
        x1 = -b/(2*a);
        printf ("\nRoot: %d\n", x1);
    }

}

int main()
{
    int a, b, c;
    printf ("Enter a, b, c: \n");
    scanf ("%d%d%d", &a, &b, &c);
    qwrt(a, b, c);
    return 0;
}
