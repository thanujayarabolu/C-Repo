#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ; i++){
        scanf("%d",&A[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0 ; i<n ; i++){
        if(A[i]>=A[0] && A[i]<=k){
            sum+=A[i];
        }
    }
    printf("%d",sum);
}
