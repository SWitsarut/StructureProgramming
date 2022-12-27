// 10.3 เปลี่ยนบิตที่ 2 ของเลข 8 บิตใด ๆ มีการสลับบิต]
#include<stdio.h>
int main(){
    short int input;
    scanf("%d",&input);
    if (input&2 == 2)
        printf("%d",input-2);
    else
        printf("%d",input+2);
    return 0 ;
}