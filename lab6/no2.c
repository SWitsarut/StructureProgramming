#include<stdio.h>
int main(){
    int id[10],time[10];
    int flag=0;
    for (int i =0;i<10;){
        scanf("%d %d",&id[i],&time[i]);
        if(time[i]>20)
            flag =1;
            break;
    }
    if(flag != 1){
        while (1)
        {
            //
        }
        
    }
    return 0;
}