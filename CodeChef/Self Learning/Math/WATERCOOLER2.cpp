#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long t,x,y,m;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>=y){
	        cout<<0<<el;
	    }
	    else{
	        if(y%x==0){
	            cout<<(y/x)-1<<el;
	        }
	        else{
	            cout<<y/x<<el;
	        }
	    }
	}
	return 0;
}