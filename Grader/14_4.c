#include<stdio.h>
int main(){
    int order[7],sum=0;
    scanf("%d %d %d %d %d %d %d",&order[0],&order[1],&order[2],&order[3],&order[4],&order[5],&order[6]);
    for (int i =0;i<7;i++){
        sum += order[i];
    }
    int earn = sum *100;
    int shirt =0;
    int spend = 0;
    for(int i =0; i<7;i++){
          for (int j = 0; j < order[i]; j++)
          {
            shirt++;
            if(shirt>250){
                spend+=60;
            }
            else if(shirt>100){
                spend+=70;
            }
            else if (shirt>0)
            {
                spend+=80;
            }
            
          }
          
    }
    printf("%d\n",spend);
    printf("%d\n",earn);
    printf("%d",earn-spend);

    return 0;
}