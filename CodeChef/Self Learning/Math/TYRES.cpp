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
	    if(n%4==0){
	        cout<<"NO"<<el;
	    }
	    else{
	        if(n%4>1){
	            cout<<"YES"<<el;
	        }
	        else{
	            cout<<"NO"<<el;
	        }
	    }
	}
	return 0;
}