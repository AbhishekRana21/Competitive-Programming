#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if((x+y)%2==0){
	        cout<<"Janmansh"<<el;
	    }
	    else{
	        cout<<"Jay"<<el;
	    }
	}
	return 0;
}