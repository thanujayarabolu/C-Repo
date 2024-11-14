#include <stdio.h>
int main()
{
    int n,i,c=0,sum=0,avg;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
        avg=sum/n;
    }
    for(i=0 ; i<n ;i++){
        if(A[i]>=avg){
            c++;
        }
    }
    printf("%d",c);
}