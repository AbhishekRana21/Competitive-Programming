#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,s;
	cin>>t;
	while(t--){
	    cin>>n; s=0;
	    while(n>0){
	        s+=n%10;
	        n/=10;
	    }
	    cout<<s<<el;
	}
	return 0;
}