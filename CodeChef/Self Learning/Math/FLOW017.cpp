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
	    if((a>b && a<c) || (a>c && a<b)){
	        cout<<a<<el;
	    }
	    else if((b>a && b<c) || (b>c && b<a)){
	        cout<<b<<el;
	    }
	    else{
	        cout<<c<<el;
	    }
	}
	return 0;
}