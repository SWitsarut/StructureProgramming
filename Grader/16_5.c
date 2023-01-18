#include<stdio.h>
#include<math.h>
int main(){
    int input;
    float distance=100000,tempdistance;
    int awsi,awsj;
    float tempx,tempy,temppow;
    scanf("%d",&input);
    float vector[input][2];
    for (int i = 0;i<input;i++)
            scanf("%f %f",&vector[i][0],&vector[i][1]);
    int loop = input-1;
    for (int i = 0; i <loop ; i++)
    {   
        for(int j = i+1;j<input;j++){
            tempx=vector[i][0]-vector[j][0];
            tempy=vector[i][1]-vector[j][1];
            temppow = (tempx*tempx)+(tempy*tempy);
            tempdistance = sqrt(temppow);
            if (tempdistance<distance){
                    distance = tempdistance;
                    awsi = i+1;
                    awsj = j+1;
            }
        }
    }
    printf("%d %d %.2f ",awsi,awsj,distance);
    return 0;
}