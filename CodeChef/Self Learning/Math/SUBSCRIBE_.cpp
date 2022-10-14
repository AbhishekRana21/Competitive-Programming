#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n%6==0){
	        cout<<x*(n/6)<<el;
	    }
	    else{
	        cout<<x*((n/6)+1)<<el;
	    }
	}
	return 0;
}