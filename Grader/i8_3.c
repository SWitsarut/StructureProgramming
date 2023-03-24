#include <stdio.h>
int main()
{
    char messege[999];
    char answer[999];
    char *pointer = messege;
    int i = 0;
    int size = 0;

    scanf("%[^\n]", messege);

    for (int i = 0; i < 100; i++)
    {
        if (messege[i] == '\0')
        {
            break;
        }
        size++;
    }

    int k = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        answer[k] = messege[i];
        printf("%c", answer[k]);
        k++;
    }

    printf("\n");

    int count_number = 0;
    for (int i = 0; i < size; i++)
    {
        if ((int)answer[i] >= 48 && (int)answer[i] <= 57)
        {
            count_number++;
        }
    }
    printf("%d\n", count_number);
    return 0;
}