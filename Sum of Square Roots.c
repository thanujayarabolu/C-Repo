#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,i;
    float sum=0.0;
    scanf("%d%d",&n,&m);
    for(i=n ; i<=m ; i++){
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}