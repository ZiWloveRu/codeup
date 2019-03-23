#include<stdio.h>
int main(){
    int c=20,d=0;
    double n=2,m=1,sum=0;
    while(c--)
    {
        sum+=n/m;
        d=m;
        m=n;
        n=(d+n);
    }
    printf("%.6f\n",sum);
    
}
