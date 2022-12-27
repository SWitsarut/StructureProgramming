#include<stdio.h>
#include<math.h>
int main(){
    float side1,side2;
    scanf("%f %f",&side1,&side2);
    printf("%.6f",sqrt(pow(side1,2)+pow(side2,2)));
    return 0;
}