#include <stdio.h>
int rev(int a)
{
    int rev=0,i;
    while(a)
    {
        i=a%10;
        rev=rev*10+i;
        a=a/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int x=t*t;
    int y=rev(n)*rev(n);
    if(rev(x)==y && rev(y)==x){
        printf("True");
    }else{
        printf("False");
    }
}