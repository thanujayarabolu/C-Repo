#include <stdio.h>
int main()
{
    int n,m,i,j,max=0;
    scanf("%d%d",&n,&m);
    int R[n];
    for(i=0 ; i<n ; i++){
        R[i]=0;
    }
    int A[n][m];
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            scanf("%d",&A[i][j]);
            R[i]+=A[i][j];
        }
    }
    for(i=0 ; i<n ; i++){
        if(max<R[i]){
            max=R[i];
        }
    }
    printf("%d",max);
}