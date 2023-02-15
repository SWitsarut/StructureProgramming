#include<stdio.h>
int minArray(int Array[],int size){
    int min = Array[0];
    for (int i = 1; i < size; i++)
    {
        if (min>Array[i])
            min = Array[i];
    }
    return  min;
}
int maxArray(int Array[],int size){
    int max = Array[0];
    for (int i = 1; i < size; i++)
    {
        if (max < Array[i])
            max = Array[i];
    }
    return  max;
}
int sumArray(int Array[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + Array[i];
    return sum;
}

int main(){
    int Array[]={4,1,2,3,4,5,6};
    int size = sizeof(Array)/sizeof(int);
    printf("%d\n",minArray(Array,size));
    printf("%d\n",maxArray(Array,size));    
    printf("%d\n",sumArray(Array,size));
    return 0;
}