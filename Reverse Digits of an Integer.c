#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n)
    {
        i=n%10;
        if(i>=0){
            printf("%d",i);
        }else{
            break;
        }
        n=n/10;
    }
}