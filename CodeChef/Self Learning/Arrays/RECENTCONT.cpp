#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,c1,c2; string s;
	cin>>t;
	while(t--){
	    cin>>n; c1=c2=0;
		while(n--){
			cin>>s;
			if(s=="START38"){
				c1++;
			}
			else{
				c2++;
			}
		}
		cout<<c1<<" "<<c2<<el;
	}
	return 0;
}