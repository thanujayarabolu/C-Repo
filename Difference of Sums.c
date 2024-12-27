#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,sum=0,sum1=0,diff;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++){
        sum+=i*i;
        sum1+=i;
    }
    int x=sum1*sum1;;
    diff=(x-sum);
    printf("%d",diff);
}