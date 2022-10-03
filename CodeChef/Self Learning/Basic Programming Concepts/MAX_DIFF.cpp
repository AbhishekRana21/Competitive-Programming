#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,s;
	cin>>t;
	while(t--){
	    cin>>n>>s;
	    if(s<=n){
	        cout<<s<<el;
	    }
	    else{
	        cout<<(n-(s-n))<<el;
	    }
	}
	return 0;
}