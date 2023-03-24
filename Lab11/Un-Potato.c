#include <stdio.h>
int switcher(int temp){
    switch (temp){
    case 'A':
        return 1;
    case 'J':
        return 10;
    case 'Q':
        return 11;
    case 'K':
        return 12;
    default:
        return temp-'0';
    }
}
typedef struct
{
    char face ;
    int numface;
    char suit;
    int numsuit;
}deck;

int main(){
    int i,j;
    int sum=0;
    char temp;
    int n;
    scanf("%d",&n);
    fflush(stdin);
    deck a[n];
    for(i=0;i<n;i++){
        scanf("%c %c",&a[i].face,&a[i].suit);
        fflush(stdin);
    }
    for(i=0;i<n;i++){
        int tempface = a[i].face;
        a[i].numface=switcher(tempface);
        if(a[i].suit=='C'){
            a[i].numsuit = 1;
        }
        if(a[i].suit=='D'){
            a[i].numsuit = 2;
        }
        if(a[i].suit=='H'){
            a[i].numsuit = 3;
        }
        if(a[i].suit=='S'){
            a[i].numsuit = 4;
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].numface>a[j].numface){
                int temp = a[i].face;
                a[i].face = a[j].face;
                a[j].face = temp;
                temp = a[i].suit;
                a[i].suit = a[j].suit;
                a[j].suit = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%c-%c",a[i].face,a[i].suit);
        if(i<n-1){
            printf(",");
        }
        sum += a[i].numface;
    }
    printf("\n%d",sum);
    return 0;
}