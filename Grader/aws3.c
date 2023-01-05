#include<stdio.h>
int main(){
    int Hour,Minute,YesNo=0,Read=0;
    scanf("%d:%d",&Hour,&Minute);
    if((Hour>=7)&&(Hour<=9)){
        if (Hour == 7)
        {
            if (Minute>=10)
            {
                printf("Y");
                YesNo=YesNo+1;
                Read=Read+1;
            }
            
        }
        if (Hour == 9)
        {
            if (Minute<=30)
            {
                printf("Y");
                YesNo=YesNo+1;
                Read=Read+1;
            }
            else{
                printf("N");
                return 0;
            }
        }
        if((Read==0)&&(YesNo==0)){
            printf("Y");
            YesNo=YesNo+1;
        }
    }
    if(YesNo<1)
        printf("N");
    return 0;
}