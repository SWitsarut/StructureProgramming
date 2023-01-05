#include<stdio.h>
int main(){
    char name[256];
    char sex = 0;
    float height=0,weight=0,ideal=0;
    printf("Please enter your name: ");
    scanf("%s",name);
    fflush(stdin);
    printf("are you male or female,%s (M,F) :",name);
    scanf(" %c",&sex);
    fflush(stdin);
    printf("%s, what is your height in c.m. and weight in k.g:",name);
    scanf("%f %f",&height,&weight);
    fflush(stdin);
    if (sex == 'M'){
        ideal=height-105;
        printf("%s you ideal weight is %.2fkg, ",name,ideal);
    }
    if (sex == 'F'){
        ideal = height-110;
        printf("%s you ideal weight is %.2fkg, ",name,ideal);
    }
    if(ideal<weight)
        printf("you are %.2f overweight",weight-ideal);
    if (ideal>weight)
        printf("you are %.2f underweight",ideal-weight);
    return 0;
}