#include<stdio.h>
#include<math.h>
float f(float x){
    if (x < 0  )
    {
        return pow(x,2)+2*x+3;
    }
    else if (x ==0)
        return 0;
    else
        return x-2;
}
void main(){
    float x;
    scanf("%f",&x);
    printf("%f",f(x));
}