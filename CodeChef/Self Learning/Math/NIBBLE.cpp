#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%4==0){
	        cout<<"Good"<<el;
	    }
    	else{
    	    cout<<"Not Good"<<el;
        }
	}
	return 0;
}