#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1;
    scanf("%d",&n);
    while(n)
    {
        i=n%10;
        if(i>=0){
            sum+=i;
            pro*=i;
        }else{
            break;
        }
        n=n/10;
    }if(sum==pro){
        printf("Spy Number");
    }else{
        printf("Not Spy Number");
    }
}