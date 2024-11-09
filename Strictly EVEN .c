#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
        if(i%2!=0 && A[i]%2==0){
            c=1;
        }
    }if(c==1){
        printf("False");
    }else{
        printf("True");
    }
}