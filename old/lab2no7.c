#include<stdio.h>
int main(){
    float height,radius,volume;
    printf("Enter height and radius of the cylinder in cm:");
    scanf("%f %f",&height,&radius);
    volume = 3.1416*height*radius*radius;
    printf("Volume of the cylinder is %.1f",volume);
    return 0;
}