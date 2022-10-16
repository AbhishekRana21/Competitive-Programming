#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,total,p20,p30;
	cin>>t;
	while(t--){
	    cin>>n;
	    total = n*50;
	    p20 = total*20/100;
	    p30 = total*30/100;
	    cout<<total-(p20+p20+p30)<<el;
	}
	return 0;
}