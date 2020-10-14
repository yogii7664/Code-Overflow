//This code is contributed by David

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  
  int mn = *min_element(a,a+n);
  cout<<mn<<endl;
  
  return 0;
}
