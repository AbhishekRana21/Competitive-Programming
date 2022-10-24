#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int r,o,c;
	cin>>r>>o>>c;
	if((20-o)*6*6>r-c){
	    cout<<"YES"<<el;
	}
	else{
	    cout<<"NO"<<el;
	}
	return 0;
}