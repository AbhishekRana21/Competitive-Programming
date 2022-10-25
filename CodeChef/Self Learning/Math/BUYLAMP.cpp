#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,k,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>k>>x>>y;
	    if(x<y){
	        cout<<n*x<<el;
	    }
	    else{
	        cout<<(k*x)+(n-k)*y<<el;
	    }
	}
	return 0;
}