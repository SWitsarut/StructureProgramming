#include<stdio.h>
#include<math.h>
int main(){
    int A =0,B=0;
    int M=0,N=0;
    float powerBig = 0,powerSmall = 0;
    scanf("%d %d",&A,&B);
    scanf("%d %d",&M,&N);
    if (((A==0)&&(M>A)) || ((B==0) && (N>B))){
        printf("Unable to finish order");
        return 0;
    }
    if (M != 0){
        powerBig = ceil(M/(6.0*A));
    }
    if (N != 0){
        powerSmall = ceil(N/(10.0*B));
    }
    if (powerBig >= powerSmall)
        printf("%.0f",powerBig);
    else
        printf("%.0f",powerSmall);
    return 0;
}