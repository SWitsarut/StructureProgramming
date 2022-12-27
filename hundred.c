#include <stdio.h>
int main()
{
    int a, b, c, temp, i;
    char ABC[3];
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    
    scanf("%s", &ABC);
    for (i = 0; i < 3; i++)
    {
        if (ABC[i] == 'A')
        {
            printf("%d ", a);
        }
        if (ABC[i] == 'B')
        {
            printf("%d ", b);
        }
        if (ABC[i] == 'C')
        {
            printf("%d ", c);
        }
    }
    return 0;
}