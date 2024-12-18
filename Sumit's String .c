#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int i,k=0,l=0;
    char s[100];
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
     l++;
    }    for(i=0;s[i]!='\0';i++){
        if(s[i]-s[i+1]==1 || s[i+1]-s[i]==1 || s[i]=='a' && s[i+1]=='z' || s[i]=='z'&& s[i+1]=='a' ){
               k++;
        }
    }
    if(k>=l-1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    }
}