#include<stdio.h>
int fibonaci(int month){
    if ((month == 1)||(month==2))
        return 1;
    else
        return fibonaci(month-1)+fibonaci(month-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibonaci(n));
    return 0;
}