#include<stdio.h>
float barrel = 25000000;
float fuel(int year){
    if (year >= 2580)
        return 0;
    else
        barrel -= barrel*0.1 ;
        return fuel(year+1) ;
}
int main(){
    fuel(2557);
    printf("%f\n",barrel);
    return 0;
}