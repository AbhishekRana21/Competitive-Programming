#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if((n*x)%4==0){
	        cout<<(n*x)/4<<el;
	    }
	    else{
	        cout<<((n*x)/4)+1<<el;
	    }
	}
	return 0;
}