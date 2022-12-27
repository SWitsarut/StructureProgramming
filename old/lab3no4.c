#include<stdio.h>
#include<math.h>
int main(){
    float degree;
    printf("Please enter angle in degree:");
    scanf("%f",&degree);
    float degreeRad = degree*M_PI/180;
    printf("sin of %.1f degree is %.4f\n",degree,sin(degreeRad));
    printf("cos of %.1f degree is %.4f\n",degree,cos(degreeRad));
    return 0;
}
