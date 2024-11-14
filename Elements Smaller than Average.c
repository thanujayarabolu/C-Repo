#include <stdio.h>
int main()
{
    int n,i,avg,sum=0,c=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
        avg=sum/n;
    }
    for(i=0 ; i<n ;i++){
        if(A[i]<=avg){
            c++;
        }
    }
    printf("%d",c);
}