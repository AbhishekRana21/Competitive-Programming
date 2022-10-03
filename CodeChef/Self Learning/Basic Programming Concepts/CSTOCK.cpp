#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	float s,a,b,c;
	cin>>t;
	while(t--){
	    cin>>s>>a>>b>>c;
	    s = s+((s/100)*c);
	    if(s>=a && s<=b){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}
