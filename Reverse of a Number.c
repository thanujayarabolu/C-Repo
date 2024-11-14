#include <stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    while(n)
    {
        i=n%10;
        if(x>=0){
        printf("%d",i);
        }else{
            break;
        }
        n=n/10;
    }
}