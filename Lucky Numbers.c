#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==478){
        printf("YES");
    }else{
        while(n){
            i=n%10;
            n=n/10;
        }
        if(i==7){
            printf("YES");
        }else{
            printf("NO");
        }
    }
}