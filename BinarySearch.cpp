// BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;
clock_t start;
int Bin_Search(int x,int arr[],int n){
	start=clock();
	int low=0,high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==x) return mid;
		if(arr[mid]<x) low=mid+1;
		else high=mid-1;
	}
	return -1;
	start=clock()-start;
}
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) arr[i]=rand()%10;
	sort(arr,arr+n);
	//cout<<"Enter one element from an array : ";
	
	// AVG. CASE
	int x; x=rand()%10;
	int res=Bin_Search(x,arr,n);
	float avg=((float)(start)/CLOCKS_PER_SEC);
	cout<<"time taken by function in avg. case is "<<avg<<" seconds..\n";
	
	
	// BEST CASE
	int bst=arr[n/2];
	int ress=Bin_Search(bst,arr,n);
	float best=((float)(start)/CLOCKS_PER_SEC);
	cout<<"time taken by function in best case is "<<best<<" seconds..\n";
	
	
	// WORST CASE
	int wst=arr[0];
	int reess=Bin_Search(wst,arr,n);
	float worst=((float)(start)/CLOCKS_PER_SEC);
	cout<<"time taken by function in best case is "<<worst<<" seconds..\n";
}
