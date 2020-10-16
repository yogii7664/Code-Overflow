#include<bits/stdc++.h>
using namespace std;

int coinChange(int coins[],int n,int sum)
{
	// DP table to store data..
	int dp[n+1][sum+1];

	for(int i=1;i<=n;i++) dp[i][0]=0;

	for(int i=0;i<=sum;i++) dp[0][i]=INT_MAX;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			// is a valid operation..
			if(j-coins[i-1]>=0)
			{
				dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
			}
			// is an invalid operation..
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}

	// final answer..
	return dp[n][sum];
}

int main()
{
	int N,total;

	// Taking number of coins..
	cin>>N;

	int coins[N];

	for(int i=0;i<N;i++) cin>>coins[i];

	// Required Sum..
	cin>>total;

	cout<<coinChange(coins,N,total)<<endl;
}
