#include<stdio.h>
int main(){
    int number=0;
    scanf("%d",&number);
    for (int i = 0;i<number;i++){
        for (int j = number-1; j > i; j--)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j < i*2-1; j++)
        {
            printf(" ");
        }
        if (i>0)
            printf("*");
        printf("\n");
    }
    // จบพีรมิดบน____________________________________________________
    for (int i = 0; i < number-1; i++)
    {
        for (int j = -1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        
        for(int j =2*number-5;j>2*i;j--){
            printf(" ");
        }
        if(i+1<number-1)
            printf("*");
        printf("\n");
    }
    
    return 0;
}