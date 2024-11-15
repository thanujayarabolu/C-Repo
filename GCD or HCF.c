#include <stdio.h>
int main()
{
    int a,b,x,l,g;
    scanf("%d%d",&a,&b);
    if(a>b){
        x=a;
    }else{
        x=b;
    }while(x)
    {
        if(x%a==0 && x%b==0){
            l=x;
            break;
        }
        x++;
    }
    g=a*b/l;
    printf("%d",g);
}