#include<stdio.h>
#include<stdlib.h>
int main(){
    int temp[3];
    for (int i = 0;i<3;i++){
        printf("Plase input temperature%d (F):",i+1);
        scanf("%d",&temp[i]);
    }
    for (int i = 0; i < 3; i++)
    {  
        printf("temperature%d:%d F is %.2f C\n",i+1,temp[i],5.00*(temp[i]-32)/9.00);
    }
    system("pause");
    return 0 ;
}