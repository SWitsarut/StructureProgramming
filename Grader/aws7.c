#include<stdio.h>
int main(){
    int input=1,array[100],i=0;
    while (input!=-1)
    {
        scanf("%d",&input);
        if(input!=-1)
            array[i]=100-input;
        i++;
    }
    for (int j = 0; j < i-1 ; j++){
        printf("%d\n",array[j]);
    }
    return 0;
}