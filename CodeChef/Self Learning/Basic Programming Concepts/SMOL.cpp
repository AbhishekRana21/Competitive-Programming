#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,k,temp;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(k>0){
	        cout<<n%k<<el;
	    }
	    else{
	        cout<<n<<el;
	    }
	}
	return 0;
}
