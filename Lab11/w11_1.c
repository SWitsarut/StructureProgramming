#include <stdio.h>
#include <math.h>
typedef struct
{
    int x;
    int y;
}point;
float dist(point point1,point point2){
    return  sqrt((pow(point1.x-point2.x,2))+(pow(point1.y-point2.y,2)));
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
}
int main(){
    point ori;
    ori.x=0,ori.y=0;
    int n;
    int i;
    scanf("%d",&n);
    point p[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&p[i].x,&p[i].y);
    }
    for(i=0;i<n;i++){
        printf("%d\n",check(p[i]));
    }
    for(i=0;i<n;i+=2){
        if(n==1){
            printf("%.0f\n",dist(ori,p[i]));
        }
        else{
            printf("%.0f\n",dist(p[i],p[i+1]));
        }
    }
    return 0;
}