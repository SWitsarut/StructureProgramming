#include<stdio.h>
int main(){
    int input = 1,amount=0,max=0;
    while (input)
    {
        scanf("%d",&input);
        if (input>max){
            max = input;
            amount=1;
        }
        else if(input == max){
            amount+=1;
        }
    }
    printf("%d %d",max,amount);
    return 0;
}