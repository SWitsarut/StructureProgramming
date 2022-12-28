#include<stdio.h>
#include<math.h>
int main(){
    float step,distance;
    scanf("%f %f",&step,&distance);
    printf("%.0f",ceil(distance/step));
    return 0;
}