#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%10==0){
	        cout<<n/10<<el;
	    }
	    else{
	        cout<<(n/10)+1<<el;
	    }
	}
	return 0;
}