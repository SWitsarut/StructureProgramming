#include<stdio.h>
int main(){
    int loopTime=0;
    float distance =0,speed,timeMinute;
    scanf("%d",&loopTime);
    for (int i = 0; i < loopTime; i++)
    {
        scanf("%f %f",&speed,&timeMinute);
        // printf("%f",distance);
        // printf("%f",timeMinute);
        // printf("%d")
        distance += (speed*(timeMinute/60.0));
    }
    printf("%.1f",distance);
    return 0;
}