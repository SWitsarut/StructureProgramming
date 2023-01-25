#include<stdio.h>
int main(){
    int r,c=0,yee,count=0;
    scanf("%d",&r);
    int arr[r+1],num[r+1];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&yee);
        arr[i] = yee;   
    }
    printf("a) ");
    for (int i = 0;i<4;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("b) ");
    for (int i = 0; i < r; i++)
    {
        if( arr[i] > arr[2]) {
            printf("%d ",arr[i]);
            num[c] = i;
            c++;
        } 
    }
    printf("\n");
    printf("c) ");
    for (int i = 0; i < c; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    printf("d) ");
    arr[r] = arr[2]+arr[3];
    for (int i = 0; i < r+1; i++)
    {
        yee = arr[i];
        printf("%d ",yee);
    }
    printf("\n");
    printf("e) ");
    arr[3] = arr[4] - arr[2];
    for (int i = 0; i < r+1; i++)
    {
        yee = arr[i];
        printf("%d ",yee);
    }
    printf("\n");
    printf("f) ");
    arr[1] > arr[5] ? printf("2") : printf("6") ;
    printf("\n");
    printf("g) ");
    yee = arr[1];
    arr[1] = arr[r];
    arr[r] = yee;
    for (int i = 0; i < r+1; i++)
    {
        yee = arr[i];
        printf("%d ",yee);
    }
    printf("\n");
    printf("h) ");
    int new[r+1];
    for (int i = 0; i < r+1; i++)
    {
        if ((arr[i] % 2) == 0) {
            new[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        yee = new[i];
        printf("%d ",yee);
    }
    return 0;
}