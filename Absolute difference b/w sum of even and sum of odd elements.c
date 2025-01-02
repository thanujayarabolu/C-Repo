#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,sum=0,sum1=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ; i++){
        scanf("%d",&A[i]);
    }
    for(i=0 ; i<n ; i++){
        if(A[i]%2==0){
            sum+=A[i];
        }
    }
    for(i=0 ; i<n ; i++){
        if(A[i]%2==1){
            sum1+=A[i];
        }
    }
    int diff=abs(sum-sum1);
    printf("%d",diff);
}