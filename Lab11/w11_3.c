#include <stdio.h>
typedef struct
{
    int m1000;
    int m500;
    int m100;
    int m50;
    int m20;
    int m10;
    int m1;
}money;


money cal(int m){
    money a;
    a.m1000=0,a.m500=0,a.m100=0,a.m50=0,a.m20=0,a.m10=0,a.m1=0;
    if(m>=1000){
        a.m1000=m/1000;
        m=m%1000;
    }
    if(m>=500){
        a.m500=m/500;
        m=m%500;
    }
    if(m>=100){
        a.m100=m/100;
        m=m%100;
    }
    if(m>=50){
        a.m50=m/50;
        m=m%50;
    }
    if(m>=20){
        a.m20=m/20;
        m=m%20;
    }
    if(m>=10){
        a.m10=m/10;
        m=m%10;
    }
    a.m1=m;
    return a;
}

int main(){
    money a;
    a.m1000=0,a.m500=0,a.m100=0,a.m50=0,a.m20=0,a.m10=0,a.m1=0;
    int n;
    scanf("%d",&n);
    a=cal(n);
    printf("%d %d %d %d %d %d %d",a.m1000,a.m500,a.m100,a.m50,a.m20,a.m10,a.m1);
}