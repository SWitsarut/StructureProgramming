#include<stdio.h>

int main()
{
    float width,lenght;   
    float area;    
    printf("please enter area:");
    scanf("%f",&area);
    scanf("%f",&width);
    printf("enter width");
    lenght=area/width;
    printf("Area = %7.3f,Width =%7.5f and lenght = %7.7f\n",area,width,lenght);
    return 0;
}   