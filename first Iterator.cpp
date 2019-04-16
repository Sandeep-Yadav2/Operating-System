#include<stdio.h>
#include<conio.h>
int main()
{
	 
	int n,i,j,size;
	printf("Enter the size of Process\n");
	scanf("%d",&size);
	int no_p[size];
	int arr_t[size];
	int burst_t[size];
	int quan_t;
	int btm[size];
	for(i=0;i<size+1;i++)
	{
		no_p[i]=i+1;
	}
	printf("Enter the arrival time of each process:\n");
	{
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr_t[i]);
		}
	}
	printf("Enter the Burst time of each process:\n");
	{
		for(i=0;i<size;i++)
		{
			scanf("%d",&burst_t[i]);
			btm[i]=burst_t[i];
		}
	}
}
