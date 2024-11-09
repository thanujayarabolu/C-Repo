#include <stdio.h>
int main()
{
    int n,i,c=0,k;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&k);
    for(i=0 ; i<n ;i++){
        if(A[i]==k){
            c++;
        }
    }printf("%d",c);
}