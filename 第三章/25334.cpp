#include<stdio.h>
int main(){
    double a,b,c,e,f,g,d;
    scanf("%lf%lf%lf",&e,&f,&g);
    if (e>f)
    {
        d=e;
        e=f;
        f=d;
    }
    else{}
    if (g>f) 
    {
        a=e;
        b=f;
        c=g;
    }
    else if (g>e) 
    {
        a=e;
        b=g;
        c=f;
    }
    else
    {
        a=g;
        b=e;
        c=f;
    }
    printf("%.2f %.2f %.2f\n",a,b,c);
    
}
