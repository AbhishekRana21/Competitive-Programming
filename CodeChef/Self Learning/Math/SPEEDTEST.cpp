#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	float t,a,x,b,y,s1,s2;
	cin>>t;
	while(t--){
	    cin>>a>>x>>b>>y;
	    s1=a/x;
	    s2=b/y;
	    if(s1>s2){
	        cout<<"Alice"<<el;
	    }
	    else if(s1<s2){
	        cout<<"Bob"<<el;
	    }
	    else{
	        cout<<"Equal"<<el;
	    }
	}
	return 0;
}