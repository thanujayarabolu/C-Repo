#include <stdio.h>
int main()
{
    int n,m,i,j,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    int A[n][m];
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            if(i%2==0){
                sum+=A[i][j];
            }
        }
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            if(i%2==1){
                sum1+=A[i][j];
            }
        }
    }
    printf("%d %d",sum,sum1);
}