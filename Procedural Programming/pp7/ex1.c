#include <stdio.h>
#include <math.h>

double inv(double x)
{
	return 1/x;
}

int main()
{
	double (*p[3])(double);
	p[0] = sqrt;
	p[1] = inv;
	p[2] = sin;

	printf("%lf  ", (*p[0])(9));
	printf("%lf  ", (*p[1])(2));
	printf("%lf  ", (*p[2])(45));

	return 0;
}