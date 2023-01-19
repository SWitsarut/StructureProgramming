#include<stdio.h>
int main(){
    int m,n;
    int count=0;
    int array[100][2];
    do
    {
        scanf("%d %d",&m,&n);
        array[count][0]=m;
        array[count][1]=n;
        count++;
    } while ((m&&n)!=0);

    for (int i=0;i<count;i++){
        for (int j = 0; j < array[i][0]; j++)
        {
            for (int k = 0; k < array[i][1]; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
        printf("\n");
    }
    return 0;
}