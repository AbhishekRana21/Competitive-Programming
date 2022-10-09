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
	    if(x>y && x>z){
	        cout<<"Setter"<<el;
	    }
	    else if(y>x && y>z){
	        cout<<"Tester"<<el;
	    }
	    else{
	        cout<<"Editorialist"<<el;
	    }
	}
	return 0;
}