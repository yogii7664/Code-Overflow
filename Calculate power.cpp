#include <iostream>
using namespace std;

long long int power(int a, int b){
    if(b==0){
        return 1;
    }else{
        return a*power(a,b-1);
    }
    return 0;
}

int main() {
    int x,y;
    cin>>x>>y;
    cout<<power(x,y);
	return 0;
}
