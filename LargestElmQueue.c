#include<stdio.h> 
#include<stdlib.h>
void insert(int Q[],int *front,int *rear,int size)
{
	int val;
	if(*front==-1)
	{
		*front=0;
		*rear=0; 
	}
	else if(*rear==size-1)
	{
		printf("\nOverflow");
	}
	else
	{
		*rear=*rear+1;
	}
		printf("\nEnter the value: \n");
		scanf("%d",&val);
		Q[*rear]=val;
	
}
void del(int Q[],int *front,int *rear,int size)
{
	int n;
	if(*front==-1||*front>*rear)
	{
		printf("\nUnderflow");
	}
	else
	{
		++*front;

	}
}
void display(int Q[],int *front,int *rear)
{
	if(*front==-1)
	{
		printf("");
		exit(0);
	}
	else
	{	printf("\nQUEUE :\n");
		for(int i=*front;i<=*rear;i++)
		{printf("\t%d \t\n",Q[i]);}
	}

	
}
int MAX(int Q[],int *front,int *rear,int size)
{      int max=Q[*front];
	while(*front<=*rear)
	{ if(Q[*front]>max)
		{max=Q[*front];}
		del(Q,&(*front),&(*rear),size);
	}
	return max;
}

main()
{
	int Q[20],s,size,front=-1,rear=-1,val,temp[20];
	printf("\nEnter the size of queue : ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{insert(Q,&front,&rear,size);}
	display(Q,&front,&rear);
	int max=MAX(Q,&front,&rear,size);
printf("\nLARGEST NO. IN QUEUE: %d",max);
}
