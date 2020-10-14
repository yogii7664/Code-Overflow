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
	printf("Stack\n");
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
int val,m,s1[10],s2[10],t1=-1,t2=-1,size;
printf("Enter the size of stack : ");
scanf("%d",&size);
printf("\nEnter element to push : \n");
for(int i=1;i<=size;i++)
{
	
		scanf("%d",&val);
		push(val,s1,&t1,size);
}
display(s1,&t1); 
while(!emp(&t1))
{
	if(t1%2==0)
	{
		pop(s1,&t1,size);
	}
	else
	{
	m=pop(s1,&t1,size);
	push(m,s2,&t2,size);
	}
}
while(!emp(&t2))
{
	m=pop(s2,&t2,size);
	push(m,s1,&t1,size);
}
printf("After Deleting Even position elements from Stack:\n");
display(s1,&t1);		
}
