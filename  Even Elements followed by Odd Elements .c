#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
    }
    for(i=0 ; i<n ;i++){
        if(A[i]%2==0){
            printf("%d ",A[i]);
        }
    }
    for(i=0 ; i<n ;i++){
        if(A[i]%2!=0){
            printf("%d ",A[i]);
        }
    }
}