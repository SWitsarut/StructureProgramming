#include<stdio.h>
#include<string.h>
int main(){
    char code[9]="00000000";
    int input;
    scanf("%d",&input);
    //1 2
    if((input%2)!=0)
        code[1] = '1';
    else code[0] = '1';

    //3
    if((input%2)==0){
        if ((input%4)!=0)
            code[2] = '1';
    }
    else{
        if((input%3)!=0)
            code[2]=='1';
    }

    //4
    if((input%2)==0){
        if ((input%6)!=0)
            code[3] = '1';
    }
    else{
        if((input%5)!=0)
            code[3]=='1';
    }
    
    //5
    if(input <10)
        code[4]='1';

    //6
    if(input <100)
        code[5]='1';

    //7
    if(input <1000)
        code[6]='1';

    //8
    if(input <10000)
        code[7]='1';

    printf("%s",code);
    return 0;
}