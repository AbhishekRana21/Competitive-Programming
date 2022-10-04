#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, n, p, x, y, ba[100], i, tt;
	cin>>t;
	while(t--){
	    cin>>n>>p>>x>>y;
		i=0;
		tt=0;
		while(i<n){
			cin>>ba[i++];
		}
		i=0;
		while(p>=1){
			if(ba[i]){
				tt+=y;
			}
			else{
				tt+=x;
			}
			i++;
			p--;
		}
		cout<<tt<<el;
	}
	return 0;
}
