#include <stdio.h>
#include <math.h>
int main()
{
    int imax=1,imin;
    int i=2;
    int first,second;
    int max,min;
    scanf("%d %d",&first,&second);
    if(first >= second)
    {
        max = first;
        min = second;
    }else
    {
        max = second;
        min = first;
    }
    for(i=2;i<=min;i++)
    {
        if((max%i) == 0 && (min%i) == 0)
        {
            imax = i;
        }
    }
    if(min == 0)
    {
        printf("%d",min);
    }else{
    printf("%d",imax);
    }
    return 0;
}