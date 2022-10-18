#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(2*a==b){
	        cout<<"ANY"<<el;
	    }
	    else if(2*a>b){
	        cout<<"FIRST"<<el;
	    }
	    else{
	        cout<<"SECOND"<<el;
	    }
	}
	return 0;
}