// FACTORIAL OF NUMBER

#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
clock_t start;
ll rcrsn(ll n){
	start=clock();
	if(n>0) return n*rcrsn(n-1);
	else return 1;
	start=clock()-start;
}
int main(){
	ll n; cin>>n;
	
	// ITERATIVE 
	ll ans=1,t=n;
	start=clock();
	while(t)ans*=t,t--;
	//cout<<ans<<endl;
	start=clock()-start;
	float itr=((float)(start)/CLOCKS_PER_SEC);
	cout<<"Time taken by function in Iterative Method is "<<itr<<" seconds..\n";
	
	
	// RECURSIVE
	ll res=rcrsn(n);
	float rec=((float)(start)/CLOCKS_PER_SEC);
	cout<<"Time taken by function in Recursive Method is "<<rec<<" seconds..\n";
	//cout<<res<<endl;
}
