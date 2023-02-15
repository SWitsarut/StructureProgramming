#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int input();
int *random(int arr[],int n);
void bubbleSort(int arr[],int n);
void swap(int *xp,int *yp);
void count(int arr[],int n);
void printoutsame(int arr[],int n);
int main()
{
	int n = input();
	int arr[n],*s;
	s = random(arr,n);
	for(int i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\n");
	bubbleSort(s,n);
	for(int i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\n");
	printoutsame(s,n);
}
int input()
{
	int n;
	printf("Give me amount of random number: ");
	scanf("%d",&n);
	return n;
}
int *random(int arr[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
		arr[i] = rand()%1001;
	return arr;
}
void bubbleSort(int s[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(s[j]>=s[j+1])
				swap(&s[j],&s[j+1]);
		}
	}
}
void swap(int *xp,int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void printoutsame(int s[],int n)
{
	int countArray[n];
	for(int i=0;i<n;i++)
		countArray[i]=1;
	for(int i=0;i<n-1;i++)
	{
		int count =1;
		for(int j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
				count++;
				countArray[j]=0;
			}
		}
		if(countArray[i]!=0)
			countArray[i] = count;
	}
	for(int i=0;i<n;i++)
	{
		if(countArray[i]!=0)
		{
			printf("Element %d : Count %d\n",s[i],countArray[i]);
		}
	}
}