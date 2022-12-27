#include<stdio.h>
int main(){
    float x1,x2,x3,x4,Median;
    printf("Please input data (x1-x4):");
    scanf("%f %f %f %f",&x1,&x2,&x3,&x4);
    Median= (x2+x3)/2;
    printf("Median is %.1f",Median);
    return 0;

}