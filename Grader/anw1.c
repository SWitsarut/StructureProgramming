#include<stdio.h>
int main(){
    int ArrayOfInput[4];
    int bigest;
    scanf("%d/%d/%d/%d",&ArrayOfInput[0],&ArrayOfInput[1],&ArrayOfInput[2],&ArrayOfInput[3]);
    bigest = ArrayOfInput[0];
    for (int i=0;i<4;i++){
        if (ArrayOfInput[i]>bigest)
            bigest = ArrayOfInput[i];
    }
    printf("%d",bigest);
    return 0;
}