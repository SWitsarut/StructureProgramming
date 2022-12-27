 //10.4 โปรแกรมหาเลขฐาน 2 ของจำนวนใด ๆ
#include<stdio.h>
void printBi(int n){
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main(){
    if (2147483647>2147483648u){
        printf("%d");
    }
    return 1;
}