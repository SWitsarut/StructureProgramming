#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(){
    return rand()%(1001);
}
void main(){
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    int array[n];
    int size = n-1;
    for (int i =0;i<size;i++){
        array[n]=random();
    }
    
}
