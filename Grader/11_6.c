#include <stdio.h>

typedef struct
{
    int sum;
} createSubDimension;

int main()
{
    createSubDimension dimension[4] = {0};

    int row = 2;
    scanf("%d", &row);
    int column = 4;
    scanf("%d", &column);
    int space[row][column];

    int divideSectionHandbook[4][2] = {{row / 2, column / 2},
                                       {row / 2, column},
                                       {row, column / 2},
                                       {row, column}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &space[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            if (i + 1 <= divideSectionHandbook[0][0] && (j + 1) <= divideSectionHandbook[0][1])
            {
                dimension[0].sum += space[i][j];
                continue;
            }

            if (i + 1 <= divideSectionHandbook[1][0] && j + 1 <= divideSectionHandbook[1][1])
            {
                dimension[1].sum += space[i][j];
                continue;
            }

            if (i + 1 <= divideSectionHandbook[2][0] && j + 1 <= divideSectionHandbook[2][1])
            {
                dimension[2].sum += space[i][j];
                continue;
            }

            if (i + 1 <= divideSectionHandbook[3][0] && j + 1 <= divideSectionHandbook[3][1])
            {
                dimension[3].sum += space[i][j];
                continue;
            }
        }
    }

    int mostDimension = 0;
    int max = dimension[0].sum;
    for (int i = 0; i < 4; i++)
    {
        if (max < dimension[i].sum)
        {
            max = dimension[i].sum;
            mostDimension = i;
        }
    }
    printf("%d", dimension[mostDimension].sum);

    return 0;
}