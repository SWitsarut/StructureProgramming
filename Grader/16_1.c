#include<stdio.h>
#include<math.h>
int main(){
    int n=0;
    int most,least;
    float  Sum=0;
    scanf("%d",&n);
    int array[n];
    for (int i =0;i<n;i++)
        scanf("%d",&array[i]);
    most =array[0];least=array[0];
    for (int i =0;i<n;i++){
        array[i]>most ? most=array[i]:array[i]<least ? least=array[i]:0;
        Sum+=array[i];
    }
    float Avg = Sum/n ;
    float sdsum = 0;
    for (int i=0;i<n;i++){
        float temp =(array[i]-Avg)*(array[i]-Avg);
        sdsum = sdsum + temp;
    }
    float sd = sqrt(sdsum/(n-1));
    printf("%.2f\n",sd);
    return 0;
}