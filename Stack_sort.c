#include<iostream>
using namespace std;
int pop(int stack[],int *top,int size)
{
	if( *top==-1)
		printf("\nStack is empty!!");
	else
	{
		int m;
		m=stack[*top];
		*top=*top-1;
		return m;
	
	}
}
void push(int val,int stack[],int *top,int size)
{
	if(*top==size-1)
	{
		printf("\nStack is full");
	}
	else
	{
	
		*top=*top+1;
		stack[*top]=val;
	}
}
void display(int stack[],int *top)
{
	int i;
	if(*top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
	
		for( int i=*top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}
bool emp(int *top)
{
	if(*top==-1)
	return 1;
	else
	return 0;
}


int main()
{
int val,s1[10],s2[10],t1=-1,t2=-1,size;
printf("Enter the size of stack :");
scanf("%d",&size);
printf("\nEnter element to push:\n");
for(int i=1;i<=size;i++)
{
	
		scanf("%d",&val);
		push(val,s1,&t1,size);
}
printf("\nEnter the element");
display(s1,&t1); 
while(!emp(&t1))
{
	int temp=pop(s1,&t1,size);
	while((!emp(&t2))&&(temp<s2[t2]))
	{
		push(s2[t2],s1,&t1,size);
		pop(s2,&t2,size);
	}
	push(temp,s2,&t2,size);
}
printf("After Sorting:\n");
display(s2,&t2);		
}
