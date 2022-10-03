#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,d,l,r;
	cin>>t;
	while(t--){
	    cin>>d>>l>>r;
	    if(d>=l){
	        if(d<=r){
	            cout<<"Take second dose now"<<el;
	        }
	        else{
	            cout<<"Too Late"<<el;
	        }
	    }
	    else{
	            cout<<"Too Early"<<el;
	        }
	}
	return 0;
}
