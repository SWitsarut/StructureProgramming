#include<stdio.h>
int main(){
    int var1,var2,temp;
    scanf("%d %d",&var1,&var2);
    if (var1>=var2)
    {
        temp  = var1;
        var1 = var2;
        var2 =temp;
    }
    if (var1 == 0){
        printf("%d",var1);
    }
    else{
    for(int i =var2;i>2;i--)
    {
        if (((var1%i) == 0) && ((var2%i) == 0)){
            printf("%d",i);
            break;
        }
    }
    }
    return 0;
    }