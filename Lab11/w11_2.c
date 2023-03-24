#include <stdio.h>
#include <math.h>
typedef struct
{
    float X;
    float Y;
    float Z;
}vector3d;

float Findlength(vector3d vector){
    return sqrt(pow(vector.X,2)+pow(vector.Y,2)+pow(vector.Z,2));
}

int main(){
    int n,i;
    scanf("%d",&n);
    vector3d v[n];
    for(i=0;i<n;i++){
        scanf("%f %f %f",&v[i].X,&v[i].Y,&v[i].Z);
    }
    for(i=0;i<n;i++){
        printf("%.2f",Findlength(v[i]));
    }
    return 0;
}