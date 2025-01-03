#include <stdio.h>
int main()
{
    int n,m,i,j,max=0;
    scanf("%d%d",&n,&m);
    int c[m];
    for(j=0 ; j<m ; j++){
        c[j]=0;
    }
    int A[n][m];
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            scanf("%d",&A[i][j]);
                c[j]+=A[i][j];
            
        }
    }
    for(j=0 ; j<m ; j++){
        if(max<c[j]){
            max=c[j];
        }
    }
    printf("%d",max);
}