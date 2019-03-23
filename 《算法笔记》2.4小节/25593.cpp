#include<stdio.h>
#include<math.h>
int main()
{
    
    double n,PI=0.0,m=1.0;
    for(n=1.0;;)
    {
        if(fabs(pow((-1.0),(m+1))*(1/n))<1E-6)
		{
			
			break;}
        PI+=pow((-1),(m+1))*(1/n);
        n+=2;
        m++;
        
    }
    printf("PI=%10.8f\n",PI*4);
}
