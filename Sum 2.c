#include <stdio.h>
int main()
{
    int a,b,x,y,i,sum=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    if(a<b){
        for(i=a ; i<=b ; i++){
            if(i%x==0 && i%y!=0){
                sum+=i;
            }
        }
        printf("%d",sum);
    }
}