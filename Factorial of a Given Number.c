#include <stdio.h>
int main()
{
    int n,i,pro=1;
    scanf("%d",&n);
    for(i=n ; i>=1 ; i--){
        pro*=i;
    }
    printf("%d",pro);
}