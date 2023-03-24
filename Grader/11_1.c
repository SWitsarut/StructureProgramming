#include <stdio.h>

typedef struct
{
    int night;
    int day;
    float sum;
} topUp;

typedef struct
{
    int below500;
    float sum;
} monthy300;

typedef struct
{
    int below1200;
    float sum;
} monthy600;

int main()
{
    topUp package1 = {0, 0, 0};
    monthy300 package2 = {0, 300};
    monthy600 package3 = {0, 600};
    int minutes[4][2];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &minutes[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 4; i++){
        package1.night += minutes[i][0];
        package1.day += minutes[i][1];
        for (int j = 0; j < 2; j++){
            sum += minutes[i][j];
        }
    }

    if (sum <= 500){
        package2.below500 = sum;
    }
    else{
        package2.below500 = 500;
        package2.sum += (sum - 500) * 1.50;
    }

    if (sum <= 1200) {
        package3.below1200 = sum;
    }
    else{
        package3.below1200 = 1200;
        package3.sum += (sum - 1200) * 1.25;
    }
    package1.sum = (package1.night * 1.25) + (package1.day * 0.75);
    if (package1.sum < package2.sum && package1.sum < package3.sum)
    {
        printf("1");
    }

    if (package2.sum < package1.sum && package2.sum < package3.sum)
    {
        printf("2");
    }

    if (package3.sum < package2.sum && package3.sum < package1.sum)
    {
        printf("3");
    }
    return 0;
}