#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int A[5]={3,4,1,2,8},i,j,tampung;
	printf("sebelum sorting:\n");
	for(i=0;i<5;i++)
	{
		printf("%i",A[i]);
	}
	for(i=1;i<5;i++)
	{
		tampung=A[i];
		j=i-1;
		while (A[j]>tampung && j>=0)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=tampung;
	}
	printf("\n\nSetelah sorting :\n");
	for(i=0;i<5;i++)
	{
		printf("%i",A[i]);
	}
	getch();
}
