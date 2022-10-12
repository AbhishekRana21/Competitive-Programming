#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int x,a,b;
	cin>>x>>a>>b;
	if(x>=a+b){
	    cout<<"YES"<<el;
	}
	else{
	    cout<<"NO"<<el;
	}
	return 0;
}