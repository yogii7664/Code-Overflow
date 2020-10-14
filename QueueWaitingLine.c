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
		printf("\nEnter the serial no. given to the customer : \n");
		scanf("%d",&val);
		Q[*rear]=val;
	
}


void del(int Q[],int *front,int *rear,int size)
{
	int n;
	if(*front==-1)
	{
		printf("\nUnderflow");
	}
	else if(*front==*rear)
	{
		printf("\nCustomer served is with token no. :%d \n",Q[*front]);
		*front=-1;
		*rear=-1;
	}
	else
	{
		printf("\nElement Deleted :%d \n",Q[*front]);
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
	{	printf("\nQUEUE Of Customers:\n");
		for(int i=*front;i<=*rear;i++)
		{
			printf("\t\t%d \t\n",Q[i]);
		}
	}
	printf("Total no. of people to be served :%d\n",*rear-*front+1);
	
}

int main()
{
	int Q[20],s,size,front=-1,rear=-1,val,choice;;
	printf("\nEnter the maximum no. of customers accomadated in the Queue : ");
	scanf("%d",&size); 
	while (1)
{
printf("\n\tMENU");
printf("\n1.Arrival of customers \n");
printf("2.Depature of customers \n");
printf("3.Display customer token yet to be served \n");
printf("4.Quit \n");
printf("\nEnter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert(Q,&front,&rear,size);
break;
case 2:
del(Q,&front,&rear,size);
break;
case 3:
display(Q,&front,&rear);
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}return 0;
}
