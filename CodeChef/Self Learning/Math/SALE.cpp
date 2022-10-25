#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a<=b && a<=c){
	        cout<<b+c<<el;
	    }
	    else if(b<=a && b<=c){
	        cout<<a+c<<el;
	    }
	    else{
	        cout<<a+b<<el;
	    }
	}
	return 0;
}