#include <stdio.h>

int main()
{
    char messege_sets[100][100];
    char answer_sets[100][100];
    int size = 0;

    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%s", messege_sets[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c", messege_sets[j][i]);
        }
    }

    return 0;
}