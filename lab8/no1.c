#include<stdio.h>
float money(float x,int n){
    if (n == 0)
    {
        return x;
    }
    else
        return money(x*(1.05),n-1);     
}
int main(){
    printf("%f",money(10000,30));
    return 0;
}