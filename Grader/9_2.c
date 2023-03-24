#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
    float z;
} vector3D;

float FindLength(float x, float y, float z)
{
    float length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    return length;
}

int main()
{
    vector3D coordinate[100];
    int SIZE = 0;
    scanf("%d", &SIZE);

    int answer[100];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%f %f %f", &coordinate[i].x, &coordinate[i].y, &coordinate[i].z);
        answer[i] = FindLength(coordinate[i].x, coordinate[i].y, coordinate[i].z);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2f\n", FindLength(coordinate[i].x, coordinate[i].y, coordinate[i].z));
    }

    return 0;
}