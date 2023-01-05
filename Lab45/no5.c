#include<stdio.h>
int main(){
    int num,total=1;
    printf("Please enter number of factorial:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
        total *= i;
    printf("Result is:%d",total);
    return 0;
}