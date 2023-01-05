#include<stdio.h>
int menu(int para){
    int temp = 0;
    if (para == 1){
        printf("Enter 1-Tuna (30), 2- Hamburger (40) , 3- Ham (35):");
        scanf("%d",&temp);
        if (temp==1)
            return 30;
        if (temp==2)
            return 40;
        if (temp==3)
            return 35;
    }
    if (para == 2){
        printf("Enter 1-Donut (17), 2- JamRoll (15) , 3- Pastry (25):");
        scanf("%d",&temp);
        if (temp==1)
            return 17;
        if (temp==2)
            return 15;
        if (temp==3)
            return 25;
    }
    if (para == 3){
        printf("Enter 1-Coke (15), 2- Est (15) , 3- Greentea (60):");
        scanf("%d",&temp);
        if (temp==1)
            return 15;
        if (temp==2)
            return 15;
        if (temp==3)
            return 60;
    }
}
void printplus(void){
    for (int i = 0;i<72;i++)
        printf("+");
    printf("\n");
}
int main(){
    char conti='Y';
    int total = 0;
    int menuNumber;
    printplus();
    printf("%40s\n","VENDING MACHINE");
    printplus();
    while (conti=='Y')
    {
        printf("Welcome to vending machine. Enter 1-sandwitch, 2-cake, 3-Beverage: ");
        scanf("%d",&menuNumber);
        total += menu(menuNumber);
        printf("Do you want to countinue: ");
        scanf(" %c",&conti);
    }
    printplus();
    printf("THANK YOU VERY MUCH THE PRICE IS: %d BATH\n",total);
    printplus();
    return 0;
}