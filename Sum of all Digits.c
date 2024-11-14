#include <stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    while(n){
        i=n%10;
        if(i>=0){
            sum+=i;
        }else{
            break;
        }
        n=n/10;
    }
    printf("%d",sum);
}