#include<stdio.h>
int main(){
    int var1,var2;
    int i = 2;
    scanf("%d %d",&var1,&var2);
    while (1)
    {
        if (var1%i == 0 && var2%i == 0){
            printf("%d",i);
            return 0;
        }
        i++;
    }
    return 0;
}