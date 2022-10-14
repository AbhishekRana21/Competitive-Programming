#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	float t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if((a+b)/2>c){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}