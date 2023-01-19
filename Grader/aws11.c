#include<stdio.h>

int main(){
    int m,n;
    int tempsum=0,endsum=0,temp;
    scanf("%d %d",&m,&n);
    int array[m][n];
    for (int i=0;i<m;i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for (int i=0;i<m;i++){
        for (int j = 0; j < n; j++)
        {
            temp = array[i][j];
            printf("%d ",temp);
            tempsum += temp;
        }
        printf("%d",tempsum);
        printf("\n");
        endsum += tempsum;
        tempsum=0;
    }
    for (int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            temp = array[j][i];
            tempsum += temp;
        }
        printf("%d ",tempsum);
        tempsum=0;
    }
    printf("%d",endsum);

    return 0;
}