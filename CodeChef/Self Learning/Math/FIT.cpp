#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    cout<<x*10<<el;
	}
	return 0;
}