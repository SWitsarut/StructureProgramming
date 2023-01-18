#include<stdio.h>
#include<math.h>
int main(){
    int N,M,L,K,C;
    int i,j;
    float sum=0;
    scanf("%d %d",&N,&M);
    scanf("%d %d",&L,&K);
    scanf("%d",&C);
    int a[N][M];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sum=L*(K*C);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            sum+=a[i][j];
        }
    }
    sum=sum/C;
    printf("%.0f",ceil(sum));
}