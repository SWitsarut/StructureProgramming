#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int n;
    fflush(stdin);
    scanf("%d %d", &x, &n);
    int sum = 0;
    for (int i = 0; i < n+1; i++)
    {
        sum += pow(x,i);
    }
    printf("%d", sum);
    return 0;
}