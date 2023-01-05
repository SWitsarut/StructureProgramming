#include<stdio.h>
int main(){
    int year;
    float gpa;
    char help;
    scanf("%d %f %c",&year,&gpa,&help);
    if(gpa>=3){
        printf("approved");
        return 0;
    }
    if(year>=2){
        if(help== 'N' ){
            printf("not approved\n");
            printf("no help");
            return 0;
        }
        if (gpa<2.5)
        {
            printf("not approved\n");
            printf("grade < 2.50");
            return 0;
        }
        printf("approved");
        return 0;
    }
    else{
        printf("not approved\n");
        printf("year < 2");
    }
    return 0;
}