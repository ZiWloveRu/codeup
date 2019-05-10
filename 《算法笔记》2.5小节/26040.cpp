#include<stdio.h>
int main()
{
    char str[10];
    for(int i=0;i<=9;i++){
        str[i]=getchar();
        getchar();
    }
    for(int i=9;i>=0;i--){
        printf("%c\n",str[i]);
    }
}
