#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if((z-(y/x))>0){
	        cout<<z-(y/x)<<el;
	    }
	    else{
	        cout<<0<<el;
	    }
	}
	return 0;
}