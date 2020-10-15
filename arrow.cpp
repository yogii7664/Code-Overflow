#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter odd value of n";
cin>>n;	
int sp=n/2,i,j;
int st=1;
for(i=1;i<=n;i++)
{
for(j=1;j<=sp;j++)
{
cout<<"\t";	
}	
for(j=1;j<=st;j++)
{
cout<<"*\t";	
}
if(i==n/2)
{
sp-=n/2;
st=n;	
}
else if(i==n/2+1)
{
st-=3;	
sp=n/2;	
}
else if(i>n/2+1)
{
st--;	
}
else{

st++;	
	
}
cout<<endl;
}
return 0;	
}
