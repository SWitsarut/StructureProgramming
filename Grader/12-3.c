// findmax multi posible
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numSet[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &numSet[i]);
    }
    // int numSet[] = {-2, 5, -1, -2, -1};
    int size = sizeof(numSet) / sizeof(int);
    int negativeNum = 0;

    for (int i = 0; i < size; i++)
    {
        if (numSet[i] < 0)
            negativeNum++;
    }
    int ans;
    int startProsition;
    //    set first num
    for (int i = 0; i < size; i++)
    {
        if (negativeNum % 2 == 0)
        {
            if (numSet[i] != 0)
            {
                ans = numSet[i];
                startProsition = i + 1;
                break;
            }
        }
        else
        {
            if (numSet[i] > 0)
            {
                ans = numSet[i];
                startProsition = i + 1;
                break;
            }
        }
    }
    // printf("ans = %d", ans);
    for (int i = startProsition; i < size; i++)
    {
        // printf("check :%d\n", numSet[i]);
        if (negativeNum % 2 == 0 && numSet[i] != 0)
        {
            ans *= numSet[i];
            // printf("%d do negativenum even multi is %d\n", numSet[i], ans);
        }
        else
        {
            if (numSet[i] > 0)
            {
                ans *= numSet[i];
            }
        }
    }
    printf("%d", ans);
    return 0;
}