#include<stdio.h>
#include<math.h>
int main(){
    float A,B,C,m,Y;
    printf("Pleasr enter A : ");
    scanf("%f",&A);
    printf("Pleasr enter B : ");
    scanf("%f",&B);
    printf("Pleasr enter C : ");
    scanf("%f",&C);
    printf("Pleasr enter m : ");
    scanf("%f",&m);
    if(m>7)
        Y = A*m*m+B*m+C;
    if (m==7)
        Y = A*m*m+B*m-C;
    if (m<7)
        Y = A*m*m+B*m;
    printf("The result of Y = %f",Y);
    return 0;
}