// 10.1 เปลี่ยนบิตที่ 1 และ 3 ของเลข 8 บิตเป็น 0]
#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    decToBinary(input);
    printf("%d",input&250);
    return 0 ;
}