#include <stdio.h>
int main()
{
    int i;
    char s[100];
    scanf("%[^\n]s",s);
    for(i=0 ; s[i]!='\0' ; i++){
        int t=s[i]-48;
        if(t%2==1){
            printf("%d",t*t);
        }
    }
}