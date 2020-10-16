#include <iostream>

using namespace std;

int *merge(int arr1[],int s1,int arr2[],int s2)
{
	int i,j,k;
	i=j=k=0;
	int *arr=new int[15];
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
			arr[k++]=arr1[i++];
		else
			arr[k++]=arr2[j++];
	}
	for(;i<s1;i++)
		arr[k++]=arr1[i];
	for(;j<s2;j++)
		arr[k++]=arr2[j];
	 return arr;
}
int main()
{
	int arr1[]={1,4,6,9,12,25};
	int arr2[]={2,3,7,8,10,15,26,29,30};
	int s1=sizeof(arr1)/sizeof(int);
	int s2=sizeof(arr2)/sizeof(int);
	int *p=merge(arr1,6,arr2,9);
	for(int i=0;i<15;i++)
	{
		cout<<p[i]<<" ";
	}
	return 0;
}
