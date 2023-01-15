#include<stdio.h>
int main(){
    int id[10],i,j;
    float t[10],temp,temp_id;
    for(i=0;i<10;i++){
        scanf("%d %f",&id[i],&t[i]);
    }
    for(i=0;i<10;i++){
        for(j=9;j>0;j--){
            if(t[j-1]>=t[j]){
                temp=t[j];
                t[j]=t[j-1];
                t[j-1]=temp;

                temp_id=id[j];
                id[j]=id[j-1];
                id[j-1]=temp_id;
            }
        }
    }
    printf("1st\n%d in %.2f\n2nd\n%d in %.2f\n3re\n%d in %.2f\n",id[0],t[0],id[1],t[1],id[2],t[2]);
    return 0;
}