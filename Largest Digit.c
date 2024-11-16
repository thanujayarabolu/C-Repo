#include <stdio.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    max=n%10;
    while(n)
    {
        i=n%10;
        if(max<i)
        {
            max=i;
        }
        n=n/10;
    }
    printf("%d",max);
}