#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(n%m==0 && (n/m)%2==0){
	        cout<<"Yes"<<el;
	    }
	    else{
	        cout<<"No"<<el;
	    }
	}
	return 0;
}