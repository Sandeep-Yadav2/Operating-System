#include<stdio.h>
#include<conio.h>
int arr_t[50], com_t[50],burst_t[50], quan_t, rqi[50]={0}, c=0, st; 
int flg=0, tm=0, noe=0, pnt=0, btm[50]={0}, turn_t, wait_t;
float aat=0, awt=0;
int seq[50];

int main()
{
	 
	int n,i,j,size,temp;
	printf("Enter the size of Process\n");
	scanf("%d",&size);
	int no_p[size];
	int arr_t[size];
	int burst_t[size];
	int quan_t;
	int seq[size];
	for(i=0;i<size+1;i++)
	{
		no_p[i]=i+1;
	}
	printf("Enter the arrival time of each process:\n");
	{
		for(i=0;i<size;i++)
		{
			printf("Arrival time for P%d:->",no_p[i]);
			scanf("%d",&arr_t[i]);
		}
	}
	printf("Enter the Burst time of each process:\n");
	{
		for(i=0;i<size;i++)
		{
			printf("Burst time for P%d:->",no_p[i]);
			scanf("%d",&burst_t[i]);
			btm[i]=burst_t[i];
		}
	}
	printf("Enter the Quantum time of  process:\n");
	scanf("%d",&quan_t);
system("cls");
	printf("your enter data is :\n");
		printf("PROCESS \tQUANTUM TIME\tARRIVAL TIME \tBURST TIME\n");
	for(i=0;i<size;i++)
	{
		printf("P%d\t\t%d\t\t%d\t\t%d\n",no_p[i],quan_t,arr_t[i],burst_t[i]);
	}
	
}
