#include <stdio.h>
#include <math.h>
int count(int a)
{
    int c=0,i;
    while(a)
    {
        i=a%10;
        c++;
        a=a/10;
    }
    return c;
}
int main()
{
    int  n,i,sum=0;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        i=n%10;
        sum+=pow(i,count(t));
        n=n/10;
    }
    if(t==sum && sum==t){
        printf("YES");
    }else{
        printf("NO");
    }
}