#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) 
{ 
    return (a > b) ? a : b;
}
int knapsack(int wt[], int val[], int W, int N, int** tb)
    {
        if(N<=0 || W==0)
        {
            return 0;
        }
        if(tb[N][W]!=-1)
        {   //Memoization
            return tb[N][W];
        }

        if(wt[N-1]<=W)
        {
            return tb[N][W]=max(val[N-1] + knapsack(wt, val, W-wt[N-1],N-1, tb), knapsack(wt, val, W, N-1, tb));
        }
        else if(wt[N-1]>W)
        {
            return tb[N][W]=knapsack(wt, val, W, N-1, tb);
        }
    }
    int knapSackR(int W, int wt[], int val[], int n) 
     { 
    // double pointer to declare the  
    // table dynamically 
    int** dp;
    dp = new int*[n];
  
    // loop to create the table dynamically 
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];
  
    // loop to initially filled the  
    // table with -1 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    return knapsack(wt, val, W, n, dp);
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,N,W,x;
    cin>>t;         //t=[1,100]
    while(t--)
    {
    cin>>N;         //N=[1,1000]
    cin>>W;         //W=[1,1000]
    int wt[W];      //wt[i]=[1,1000]
    int val[N];     //val[i]=[1,1000]

    for (int i = 0; i <N; i++)
    {
        /* code */
        cin>>x;
        val[i]=x;
    }
    
    for (int i = 0; i <W; i++)
    {
        /* code */
        cin>>x;
        wt[i]=x;
    }
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSackR(W, wt, val, n);
    }
    }

    //top down approach
    #include <iostream>
using namespace std;


void knap(int n, int w, int val[],int weight[])
{
      int t[n+1][w+1];     
   
   
   //fill  0th rows and coloumns with zero.
   for(int i=0;i<=n;i++)      
      t[i][0]=0;
      
   for(int j=0;j<=w;j++)
      t[0][j]=0;
      
      
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=w;j++)
           {
               if(j<weight[i])
               t[i][j]=t[i-1][j];
               else
               t[i][j]=max((val[i]+t[i-1][j-weight[i]]),t[i-1][j]);
           }
       }
     
      cout<<t[n][w]<<endl; //last element
    
}
int main() {int y; cin>>y;
while(y--)
{ int n; cin>>n;
   int w; cin>>w;
   int val[n];int weight[n];
   
   for(int i=1;i<=n;i++)
   cin>>val[i];
   
   for(int i=1;i<=n;i++)
   cin>>weight[i]; 
   
 knap(n,w,val,weight);
    
}
return 0;
}