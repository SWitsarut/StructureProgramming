#include<stdio.h>
int main(){
    float number1,number2;
    char operator;
    printf("Please enter number1: ");
    scanf("%f",&number1);
    printf("Please enter number2: ");
    scanf("%f",&number2);
    printf("Please enter operator: ");
    scanf(" %c",&operator);
    if (operator=='+') {
        printf("Result is %f",number1+number2);
    }
    if (operator=='-') {
        printf("Result is %f",number1-number2);
    }
    if (operator=='*'){
        printf("Result is %f",number1*number2);
    }
    if (operator == '/'){
        printf("Result is %f",number1/number2);
    }
    return 0;
}