#include<stdio.h>
int main(){
    char answer[21];
    scanf("%s",answer);
    int std;
    scanf("%d",&std);
    char student[std][21];
    for (int i = 0; i < std; i++)
    {
        scanf("%s",student[i]);
    }
    int score[std];
    int tempscore=0;
    for (int i = 0; i < std; i++)
    {
        score[i]=0;
        for (int j = 0; j < 20; j++)
        {   
            if (j<15){
                if (answer[j] == student[i][j])
                {
                    score[i]++;
                }
            }
            else if (j<18)
            {
                if (answer[j] == student[i][j])
                {
                    score[i]+=2;
                }
            }
            else{
                if (answer[j] == student[i][j])
                {
                    score[i]+=3;
                }
            }
            
            
            
        }
        tempscore = 0;
    }
    for (int i = 0;i<std;i++){
        printf("std %d => %d\n",i+1,score[i]);
    }
    return 0;
}