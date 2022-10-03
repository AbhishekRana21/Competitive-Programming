#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b,a1,b1,a2,b2;
	cin>>t;
	while(t--){
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a==a1 && b==b1) || (a==b1 && b==a1)){
	        cout<<1<<el;
	    }
	    else if((a==a2 && b==b2) || (a==b2 && b==a2)){
	        cout<<2<<el;
	    }
	    else{
	        cout<<0<<el;
	    }
	}
	return 0;
}
