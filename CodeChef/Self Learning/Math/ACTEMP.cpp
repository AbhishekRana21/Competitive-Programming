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
	    if(b<a || b<c){
	        cout<<"No"<<el;
	    }
	    else{
	        cout<<"Yes"<<el;
	    }
	}
	return 0;
}