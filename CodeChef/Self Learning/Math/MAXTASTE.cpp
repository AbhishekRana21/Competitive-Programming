#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b,c,d,s;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    s=(a>b)?a:b;
	    s+=(c>d)?c:d;
	    cout<<s<<el;
	}
	return 0;
}