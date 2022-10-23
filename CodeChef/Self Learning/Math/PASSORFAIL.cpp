#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,x,p;
	cin>>t;
	while(t--){
	    cin>>n>>x>>p;
	    if((x*3)-(n-x)>=p){
	        cout<<"PASS"<<el;
	    }
	    else{
	        cout<<"FAIL"<<el;
	    }
	}
	return 0;
}