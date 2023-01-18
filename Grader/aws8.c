#include<stdio.h>

int main(){
    int input,array[100],i=0;
    while (input!=-1)
    {
        scanf("%d",&input);
        if (input!=-1)
        {
            array[i]=input;
            i++;
        }
    }
    for (int j = 0; j < i ; j++)
    {
        for (int k = 1; k <= array[j]; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    
    return 0;
}