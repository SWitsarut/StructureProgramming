#include<stdio.h>
#include<math.h>
float calrec(int x,int y){
    return x*y;
}
float calcir(float x){
    return (M_PI*pow(x,2));
}
int main(){
    short select;
    printf("========MENU========\n");
    printf("1.Calculate area of rectangle\n");
    printf("2.Calculate area of circle\n\n");
    printf("Please enter 1 or 2:");
    scanf("%hi",&select);
    if (select == 1)
    {
        int x,y;
        printf("Please enter width:");
        scanf("%d",&x);
        printf("Please enter height:");
        scanf("%d",&y);
        printf("Area = %.2f",calrec(x,y));
    }
    else{
        float x;
        printf("Please enter radius:");
        scanf("%f",&x);
        printf("Area = %.2f",calcir(x));
    }
    return 0;
}