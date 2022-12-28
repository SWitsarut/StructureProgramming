#include<stdio.h>
int main(){
    int number =0;
    scanf("%d",&number);
    if ((number%2) == 0)
    {
        for ( int i = 2; i <= number; i=i+2)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for ( int i = number-2; i > 0; i=i-2)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
    else
    {
        for ( int i = 1; i <= number; i=i+2)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for ( int i = number-2; i > 0; i=i-2)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        
    }
    
    return 0;
}