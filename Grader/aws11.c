#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int think[n+1];
    // input array think
    for (int i=0;i<n;i++){
        scanf("%d",&think[i]);
    }
    // a)
    printf("a) ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",think[i]);
    }
    printf("\n");
    // b
    printf("b) ");
    int max = think[2];
    int indexAmount = 0;
    for(int i =0;i<n;i++){
        if (think[i]>max)
        {
            indexAmount++;
        }
    }
    int index[indexAmount];
    int morethanmax[indexAmount];
    int runner =0;
    for (int j = 0; j < indexAmount; j++){
        for (int i = runner;i<n;i++){
            runner++;
            if (think[i]>max){
                index[j]=i;
                morethanmax[j]=think[i];
            }
        }
    }
    for (int i = 0; i < indexAmount; i++)
    {
        printf("%d ",morethanmax[i]);
    }
    
    printf("\n");
    // c
    printf("c) ",index);
    for (int i = 0; i < indexAmount; i++)
    {
        printf("%d ",index[i]);
    }
    printf("\n");
    // d
    n+=1;
    think[n-1]= think[2]+think[3];
    printf("d) ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",think[i]);
    }
    printf("\n");
    // e
    printf("e) ");
    think[3]=abs(think[2]-think[4]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",think[i]);
    }
    printf("\n");
    // f
    printf("f) ");
    if (think[1]>think[5])
    {
        printf("2");
    }
    else{
        printf("6");
    }
    printf("\n");
    // g
    printf("g) ");
    int temp=think[1];
    think[1]=think[n-1];
    think[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",think[i]);
    }
    printf("\n");
    // h
    printf("h) ");
    int amount =0;
    for (int i = 0; i < n; i++)
    {
        if (think[i]%2 ==0){
            amount+=1;
        }
    }
    int new[amount];
    runner =0;
    for (int i = 0; i < amount; i++)
    {
        for (int j = runner; j < n; j++)
        {
            runner+=1;
            if (think[j]%2 == 0)
            {
                new[i]=think[j];
                break;
            }
            
        }
    }
    for (int i = 0; i < amount; i++)
    {
        printf("%d ",new[i]);
    }
    return 0;
}