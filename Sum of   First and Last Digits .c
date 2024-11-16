#include <stdio.h>
int main()
{
    int n,x,i,sum=0;
    scanf("%d",&n);
    x=n%10;
    while(n)
    {
        i=n%10;
        n=n/10;
    }
    if(i>0){
        sum=x+i;
    }
    printf("%d",sum);
}