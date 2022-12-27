#include<stdio.h>
#include<stdlib.h>
int main (){
    char invoicenumber[25],date[25],duedate[25],customerName[25];
    char name[4][25] = {};
    unsigned int quntity[3] ={};
    float vat = 0.07,unitPrice[3] = {},totalPrice[3],totalAmount;
    printf("Please enter the invoice number : ");
    scanf("%s",&invoicenumber);
    printf("Please enter date  : ");
    scanf("%s",&date);
    printf("Please enter due date  : ");
    scanf("%s",&duedate);
    printf("Please enter customer name  : ");
    scanf("%s",&customerName);
    for (int i = 0;i<3;i++) {
        printf("Please enter name of item%d :",i+1);
        scanf("%s",&name[i+1]);
        printf("Please enter quantity of item%d :",i+1);
        scanf("%d",&quntity[i]);
        printf("Please enter unit price of item%d :",i+1);
        scanf("%f",&unitPrice[i]);
    }
    printf("Invoice No. : %-20s",invoicenumber);
    printf("Date : %-s\n",date);
    printf("Customer: %-20s",customerName);
    printf("Due date : %s\n",duedate);
    printf("# | %-20s | %10s | %10s | %10s\n","Item Name","Unit Price","Quantity","Total Price\n");
    for (int i = 0;i<65;i++){
        printf("_");
    }
    printf("\n");
    for (int i = 0; i < 3; i++){   
        totalPrice[i] = quntity[i]*unitPrice[i];
        printf("%d | %-20s | %10.2f | %10d | %10.2f\n",i+1,name[i+1],unitPrice[i],quntity[i],totalPrice[i]);
    }
    for (int i = 0;i<3;i++){
        totalAmount += totalPrice[i];
    }
    for (int i = 0;i<65;i++){
        printf("_");
    }
    printf("\n");
    printf("%53s%10.2f\n","Total Amount :",totalAmount);
    printf("%53s%10.2f\n","VAT :",totalAmount*vat);
    printf("%53s%10.2f\n","Amount Due :",totalAmount+totalAmount*vat);
    for (int i = 0;i<65;i++){
        printf("_");
    }
    return 0 ;
}