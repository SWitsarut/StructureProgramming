#include <stdio.h>
int main(){
	int x=0,midterm,final,homework;
	scanf("%d %d %d",&midterm,&final,&homework);
	x = midterm*0.4+final*0.5+homework*0.1;
	if(x>=90 && x<=100)
		printf("'A'");
	else if(x>=85 && x<=90)
		printf("'B+'");
	else if(x>=80 && x<=85)
		printf("'B'");
	else if(x>=70 && x<=80)
		printf("'C+'");
	else if(x>=60 && x<=70)
		printf("'C'");
	else if(x>=55 && x<=60)
		printf("'D+'");
	else if(x>=50 && x<=55)
		printf("'D'");
	else
		printf("'F'");
}