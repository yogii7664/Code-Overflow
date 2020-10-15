#include<iostream>
using namespace std;
int main()
{
int n,i,sum=0;
cout<<"enter no of elements";
cin>>n;
int a[n];
cout<<"enter array elements";
for(i=0;i<=n-1;i++)
{
cin>>a[i];	
}	
for(i=0;i<=n-1;i++)
{
sum+=a[i];	
}	
cout<<"sum of array elements is"<<sum;	
return 0;	
}
