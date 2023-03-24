#include <stdio.h>
typedef struct
{
    int a[100];
    int top;
}stack;

int main(){
    stack x;
    int n=0,i;
    char op;
    while(1){
        printf("please select operation : ");
        scanf(" %c",&op);
        if(op=='P'){
            printf("please input data : ");
            scanf("%d",&x.a[n]);
            n++;
        }
        if(op=='X'){
            n--;
            x.top=x.a[n];
            printf("data is : %d",x.top);
            printf("\n");
        }
        
    }
    return 0;
} 