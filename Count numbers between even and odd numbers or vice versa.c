#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
    }
    for(i=1 ; i<n-1 ; i++){
        if(A[i-1]%2==0 && A[i+1]%2!=0 || A[i-1]%2!=0 && A[i+1]%2==0){
        c++;
        }
    }
    printf("%d",c);
}