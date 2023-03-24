#include<stdio.h>
#include<math.h>
typedef struct{
        int x;
        int y

    }point;
float dist(point point1,point point2){
    return sqrt(pow((point1.x-point2.x),2)+pow(point1.y-point2.y,2))
}
int check(point p){
    if(p.x>0&&p.y>0){
        return 1; 
    }
    if(p.x<0&&p.y>0){
        return 2; 
    }
    if(p.x<0&&p.y<0){
        return 3; 
    }
    if(p.x>0&&p.y<0){
        return 4; 
    }

int main(){
    

    return 0;
}