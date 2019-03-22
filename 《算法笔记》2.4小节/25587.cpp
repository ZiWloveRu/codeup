#include<stdio.h>
int main(){
    int sum=0,n=1;
    do{
        sum+=n;
        n++;
    }
    while(n<=100);
    
    printf("%d\n",sum);
}
