#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,f;
	cin>>t;
	while(t--){
	    cin>>n; f=1;
	    while(n>1){
	        f*=n;
	        n--;
	    }
	    cout<<f<<el;
	}
	return 0;
}