#include<stdio.h>
int main(){
    int score[3];
    int totalscore =0;
    scanf("%d/%d/%d",&score[0],&score[1],&score[2]);
    for (int i =0;i<3;i++){
        totalscore += score[i];
    }
        if (totalscore>=80){
            printf("A");
        }
        else if(totalscore>=70){
            printf("B %d",80-totalscore);
        }
        else if(totalscore>=60){
            printf("C %d",80-totalscore);
        }
        else if(totalscore>=50){
            printf("D %d",80-totalscore);
        }
        else{
            printf("F %d",80-totalscore);
        }
    return 0;
}