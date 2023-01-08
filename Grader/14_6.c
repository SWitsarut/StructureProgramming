#include<stdio.h>
int main(){
    int input = 0;
    int start = 1;
    int num;
    scanf("%d",&input);
    for (int i = 0;i<input;i++){
        num=i+1;
        for(int j=0;j<input;j++){
            if (num>input)
                num=1;
            printf("%d ",num);
            num++;
        }
    printf("\n");
    }
    return 0;
}