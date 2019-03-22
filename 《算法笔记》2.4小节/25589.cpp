#include<stdio.h>
int main(){
    int sum=0,n,m;
    scanf("%d",&m);
    for(n=1;;n++){
        if (n>m) 
        break;
        sum+=n;
    }
    printf("%d",sum);
}
