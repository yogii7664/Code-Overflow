
#include<Stdio.h>
   #include<conio.h>
   #define R 3
   #define C 3
   void main()
   {
   int a[R][C],b[R][C],c[R][C],d[R][C],k=0,i=0,j=0;
   clrscr();
    for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	a[i][j]=b[i][j]=c[i][j]=0;
	}
   }
   for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	printf("Enter the value for a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
	}
    }
    for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");

   }
   for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	printf("Enter the value for a[%d][%d]",i,j);
	scanf("%d",&b[i][j]);
	}
    }
    for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	printf("%d ",b[i][j]);
	}
	printf("\n");

   }
   for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	 for(k=0;k<C;k++)
	 {
	  c[i][j]=c[i][j]+a[i][k]*b[k][j];
	 }
	}
   }
   printf("the multiplication is:-\n");
    for(i=0;i<R;i++)
   {
	for(j=0;j<C;j++)
	{
	printf("%d ",c[i][j]);
	}
	printf("\n");

   }
    getch();
   }
