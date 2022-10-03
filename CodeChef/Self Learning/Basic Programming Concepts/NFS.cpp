#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	float u,v,a,s;
	cin>>t;
	while(t--){
	    cin>>u>>v>>a>>s;
	    if(u==v || (u*u-2*a*s<=v*v)){
	        cout<<"Yes"<<el;
	    }
	    else{
	        cout<<"No"<<el;
	    }
	}
	return 0;
}
