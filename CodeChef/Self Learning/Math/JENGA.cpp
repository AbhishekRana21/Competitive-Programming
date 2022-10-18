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
	    if(x%n==0){
	        cout<<"Yes"<<el;
	    }
	    else{
	        cout<<"No"<<el;
	    }
	}
	return 0;
}