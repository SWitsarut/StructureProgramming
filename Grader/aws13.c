#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int size = n+1;
    char answer[size];
    scanf("%s",answer);
    int std;
    scanf("%d",&std);
    char student[std][n+1];
    for (int i = 0; i < std; i++)
    {
        scanf("%s",student[i]);
    }
    int score[std];
    int tempscore=0;
    for (int i = 0; i < std; i++)
    {
        score[i]=0;
        for (int j = 0; j < n; j++)
        {
            if (answer[j] == student[i][j])
            {
                score[i]++;
            }
        }
        tempscore = 0;
    }
    for (int i = 0;i<std;i++){
        printf("std %d => %d\n",i+1,score[i]);
    }
    return 0;
}