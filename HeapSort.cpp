#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int node){
	int mx=node;
	int left=2*node+1,right=2*node+2;
	if(left<n and a[left]>a[mx])mx=left;
	if(right<n and a[right]>a[mx])mx=right;
	if(mx!=node){
		swap(a[node],a[mx]);
		heapify(a,n,mx);
	}
}
void heap(int a[],int n){
	int index=(n/2)-1;
	for(int i=index;i>=0;i--)heapify(a,n,i);
	for(int i=n-1;i>0;i--){
		swap(a[0],a[i]);
		heapify(a,i,0);
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	heap(a,n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
