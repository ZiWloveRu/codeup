#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main( )
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double r1, r2;
	r1 = (-b+sqrt(pow(b, 2.0)-(4*a*c))) / (2 * a);
	r2 = (-b - sqrt(pow(b, 2.0) -( 4 * a*c))) / (2 * a);
	printf("%s%7.2f\n%s%7.2f", "r1=", r1, "r2=", r2);
	getchar();
	}