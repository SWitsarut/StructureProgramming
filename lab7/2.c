#include<stdio.h>
#include<math.h>
float d(int x1,int y1,int z1,int x2,int y2,int z2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
}
void main(){
    int x1,x2,y1,y2,z1,z2;
    scanf("(%d,%d,%d) (%d,%d,%d)",&x1,&y1,&z1,&x2,&y2,&z2);
    printf("%f",d(x1,y1,z1,x2,y2,z2));
}