#include<stdio.h>
int main()
{
    int n,m,c=1,d=0;
    n=1,m=1;
    scanf("%d",&d);
    while(1)
    {
        if(c==d)
        {
            printf("%d\n",n);
            break;
        }
            else if(c+1==d)
            {
                printf("%d\n",m);
                break;
                
            }
            else
            {
                n=n+m;
                m=n+m;
            
        }
    
    c+=2;
    
    }
    
    
}
