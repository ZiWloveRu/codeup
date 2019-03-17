#include "stdafx.h"
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, r1, r2;
	scanf("%lf%lf%lf", &a, &b, &c);
	if ((pow(b, 2.0) - 4 * a*c)<0)
		printf("%s\n", "No real roots!");
	else {
		r1 = (-b + sqrt(pow(b, 2.0) - 4 * a*c)) / (2 * a);
		r2 = (-b - sqrt(pow(b, 2.0) - 4 * a*c)) / (2 * a);
		printf("r1=%7.2f\nr2=%7.2f\n", r1, r2);

	}
	

}