#include"stdafx.h"
#include<stdio.h>
int main()
{
	double a, b, c = 0;
	scanf("%lf%lf", &a, &b);
	if (a < b)
	{
	}
	else {
		c = a;
		a = b;
		b = c;
	}
	printf("%f %f\n", a, b);

}
