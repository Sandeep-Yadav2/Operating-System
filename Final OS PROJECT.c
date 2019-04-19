#include<stdio.h>
#include<conio.h>
void find_stack1(int pnt,int tm,int size);
void find_stack2(int pnt, int tm,int size);
void AddQue(int pnt);
int arr_t[50], com_t[50],burst_t[50], quan_t, rqi[50]={0}, c=0, st; 
int flg=0, tm=0, noe=0, pnt=0, btm[50]={0}, turn_t, wait_t;
float aat=0, awt=0;
int seq[50];

int main()
{
	printf("****************WELCOME TO ROUND ROBIN ALGORITHM PROGRAM*********\n");
	int n,i,j,size,temp;
	printf("Enter the Number of Process:->");
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
printf("\n");
printf("Ready Queue:");
	do{
if(flg==0){
st=arr_t[0];
//Reduce bt
if(btm[0]<=quan_t){
tm=st+btm[0];
btm[0]=0;
find_stack1(pnt,tm,size);
}
else{
btm[0]=btm[0]-quan_t;
tm=st+quan_t;
find_stack1(pnt,tm,size);
AddQue(pnt);}
}
else{
pnt=rqi[0]-1;
st=tm;
for(i=0;i<noe && noe!=1;i++){
rqi[i]=rqi[i+1];}
noe--;

if(btm[pnt]<=quan_t){
tm=st+btm[pnt];
btm[pnt]=0;
find_stack2(pnt, tm,size);}
else{
btm[pnt]=btm[pnt]-quan_t;
tm=st+quan_t;
find_stack1(pnt,tm,size);
AddQue(pnt);}
}
if(btm[pnt]==0){
com_t[pnt]=tm;
}
flg++;
printf("->P%d",pnt+1,"%d->",tm);
}while(noe!=0);

printf("\n\nPROCESS\t Arrival Time\t Burst Time\tCompletion Time\t Turn Around time\tWaiting Time\n");
int x;
for(i=0;i<size;i++)
{
turn_t=com_t[i]-arr_t[i];
wait_t=turn_t-burst_t[i];

printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",no_p[i],arr_t[i],burst_t[i],com_t[i],turn_t,wait_t);
awt=awt+wait_t;
aat=aat+turn_t;
seq[i]=turn_t;

}

awt=awt/size;
aat=aat/size;

printf("\nAVERAGE turn_t:%.2f \n",aat);
printf("\nAVERAGE WT:%.2f\n",awt);
}
void find_stack1(int pnt,int tm,int size){
int x;
for(x=pnt+1;x<size;x++){
if(arr_t[x]<=tm){
rqi[noe]=x+1;
noe++;}
}
}
void find_stack2(int pnt, int tm,int size){
int x;
for(x=pnt+1;x<size;x++){

int fl=0;
int y;
for(y=0;y<noe;y++){
if(rqi[y]==x+1){
fl++;}}
if(arr_t[x]<=tm && fl==0 && burst_t[x]!=0){
rqi[noe]=x+1;
noe++;}
}
}
void AddQue(int pnt){
rqi[noe]=pnt+1;
noe++;
}
	

