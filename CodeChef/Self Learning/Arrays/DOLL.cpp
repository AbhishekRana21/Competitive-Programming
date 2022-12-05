#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,k,h,s;
	cin>>t;
	while(t--){
	    cin>>n>>k; s=0;
		while(n--){
			cin>>h;
			if(h>k){
				s++;
			}
		}
		cout<<s<<el;
	}
	return 0;
}