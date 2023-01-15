#include<stdio.h>
#include<string.h>
int main(){
	int total=0,arr[13],check,check2;
	char string[14];
    printf("Please Enter ID: ");
	scanf("%s",string);
	for(int i=0,j=13;i<12;i++,j--){
		arr[i] = (string[i] - '0')*j;
		total = total+arr[i];
	}
	check = total%11;
	check2=11-check;
	if(check2 >= 10){
		check2 = check2%10;
	}
	if(check2 == string[12]-'0')
		printf("Your ID is Valid");
	else
		printf("Your ID is Invalid");
	return 0;
}