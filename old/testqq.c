#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *fruits[] = {
        "2 orange",
        "2 apple",
        "2 banana"
    };
    printf("%s\n",fruits[1]);
    printf("%s\n",fruits[2]);
    printf("finish");
    system("pause");
    return 0 ;
}