#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,m,n,k;
	cin>>t;
	while(t--){
	    cin>>m>>n>>k;
	    if(m-(n*k)>0){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}