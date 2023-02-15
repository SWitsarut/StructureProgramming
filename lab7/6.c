#include <stdio.h>
void drawline(char c, int begin, int end){
    for (int i = begin; i <= end; i++)
        printf("%c", c);
    printf("\n");
    printf("\n");
}
void drawpoints(char c, int *list, int n){
    int i,j=1;
        for (i = 0; i < n; i++){
            int point = list[i];
    for (;j <= point;j++){   
        if(j < point)                    
            printf(" ");          
        else { 
            printf("%c",c);
            j = point+1;
            break;
                } 
            }
        }
    printf("\n");
    printf("\n");
}
int main()
{
    int list[10];
    char c = '*';
    /* draw triangle */
    list[0] = 5;
    drawpoints(c, list, 1);
    list[0] = 3; list[1] = 7;
    drawpoints(c, list, 2);
    list[0] = 1; list[1] = 9;
    drawpoints(c, list, 2);
    drawline(c, 1, 10);
    /* draw rectangle */
    printf("\n");
    c = '#';
    drawline(c, 1, 10);
    list[0] = 1; list[1] = 10;
    drawpoints(c, list, 2);
    drawpoints(c, list, 2);
    drawline(c, 1, 10);
    getchar();
    return 0;
}