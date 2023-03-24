#include<stdio.h>
void function(int n,char *Aptr,int *size){ 
        for (int i =0;i<*size;i++){
            for (size_t j = 0; j < n; j++)
                {
                    printf("%c",*(Aptr+(j*100)));
                }
            Aptr++;
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int size[n];
    char array[n][100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",array[i]);
        int Sizeof = 0;
        int j = 0;
        while (array[i][j] != '\0')
        {
            Sizeof++;
            j++;
        }
        size[i] = Sizeof;
    }
    function(n,array,size);
    return 0;
}