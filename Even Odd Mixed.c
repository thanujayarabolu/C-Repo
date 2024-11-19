#include <stdio.h>
int main()
{
    int n,e=0,o=0,i;
    scanf("%d",&n);
    while(n){
        i=n%10;
        if(i%2==0){
            e++;
        }else{
            o++;
        }
        n=n/10;
    }
    if(e==0){
        printf("Odd");
    }else if(o==0){
        printf("Even");
    }else{
        printf("Mixed");
    }
}