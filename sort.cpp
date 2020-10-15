#include<iostream>
using namespace std;
int main()
{
int n,temp,i,j;
cout<<"enter no of elements";
cin>>n;
int a[n];
cout<<"enter array elements";
for(i=0;i<=n-1;i++)
{
cin>>a[i];	
}	
for(j=0;j<=n-2;j++)
{
for(i=0;i<=n-2-j;i++)
{
if(a[i]<a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;	
}	
}	
}
cout<<"sorting in descending";
for(i=0;i<=n-1;i++)
{
cout<<a[i]<<" ";	
	
}	
return 0;	
}
