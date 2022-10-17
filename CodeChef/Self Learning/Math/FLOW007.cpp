#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,rev,r;
	cin>>t;
	while(t--){
	    cin>>n; rev=0;
	    while(n>0){
	        r=n%10;
	        rev=(rev*10)+r;
	        n/=10;
	    }
	    cout<<rev<<el;
	}
	return 0;
}