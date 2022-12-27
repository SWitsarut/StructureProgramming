#include<stdio.h>
#include<math.h>
int main(){
    float step,distance;
    scanf("%d %d",&step,&distance);
    printf("%.0f",ceil(distance/step));
    return 0;
}