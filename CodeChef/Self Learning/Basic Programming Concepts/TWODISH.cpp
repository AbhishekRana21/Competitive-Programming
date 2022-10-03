#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,a,b,c;
	cin>>t;
	while(t--){
	    cin>>n>>a>>b>>c;
	    if((a+c)>=n && b>=n){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}
