#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t=4,p,m=0;
	while(t--){
	    cin>>p;
	    if(p>=10){
	        m++;
	    }
	}
	cout<<m;
	return 0;
}