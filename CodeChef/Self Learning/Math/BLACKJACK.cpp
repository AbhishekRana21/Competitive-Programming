#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(21-a-b<=10){
	        cout<<21-a-b<<el;
	    }
	    else{
	        cout<<-1<<el;
	    }
	}
	return 0;
}