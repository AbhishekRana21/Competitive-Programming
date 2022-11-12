#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,l,r,i,m,c;
	cin>>t;
	while(t--){
	    cin>>l>>r; c=0;
		for(i=l;i<=r;i++){
			m=i%10;
			if(m==2 || m==3 || m==9){
				c++;
			}
		}
		cout<<c<<el;
	}
	return 0;
}