#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,a,b;
	cin>>t;
	while(t--){
	    cin>>x>>a>>b;
	    if(a+(2*b)>=x){
	        cout<<"Qualify"<<el;
	    }
	    else{
	        cout<<"NotQualify"<<el;
	    }
	}
	return 0;
}