#include <stdio.h>
int main()
{
    int n,i,sum=0,sum1=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ; i++){
        scanf("%d",&A[i]);
    }
    for(i=0 ; i<n/2 ; i++){
        sum+=A[i];
    }
    for(i=n/2 ; i<n ; i++){
        sum1+=A[i];
    }
    int diff=(sum1-sum);
    printf("%d",diff);
}