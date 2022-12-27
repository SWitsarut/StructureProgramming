#include<stdio.h>
#include<String.h>
int main(void){
    char ABC[4];
    int number[3],temp;
    scanf("%d %d %d",&number[0],&number[1],&number[2]);
    scanf("%s",ABC);
    for (int i = 0; i < 3; i++){
        for (int j = i+1;j<3;j++){
            if (number[i]>number[j]){
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    for(int i = 0;i<3;i++){
        printf("%d",number[ABC[i]-'A']);
    }
    return 0;
}
