#include<stdio.h>
int main(){
    int prime=-1,input=1,max=0,entercode = 0;
    while (input)
    {
        scanf("%d",&input);
        for (int i = 2; i < input; i++)
        {
            if ((input%i)==0)
            {
                entercode = 1;
                break;
            }
        }
            if (entercode == 0)
            {
                input>max?max=input:0;  
            }
            else{
                entercode = 0;
            }
    }
    printf("%d",max);
    return 0;
}