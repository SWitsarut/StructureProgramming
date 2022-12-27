#include<stdio.h>
int main(){
    unsigned int money;
    unsigned int key[7] ={1000,500,100,50,20,10,1};
    unsigned int change[7] = {0,0,0,0,0,0,0};
    scanf("%d",&money);
    if (!(money<1000000))
        return 0;
    for (int i =0;i<7;i++){
        if (money/key[i]>0){
            change[i]+=money/key[i];
            money =  money%key[i];
        }
    }
    printf("%d %d %d %d %d %d %d",change[0],change[1],change[2],change[3],change[4],change[5],change[6]);
    return 0;
}