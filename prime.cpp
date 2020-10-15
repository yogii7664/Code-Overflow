#include<iostream>
using namespace std;
int main()
{
int n,f=0,i,j;
cout<<"enter range upto ehich you want prime numbers strating from 1";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{
	f++;
}	
}
if(f==2)
{
cout<<"prime is"<<i<<endl;	
}
f=0;	
}	
	
return 0;	
}
