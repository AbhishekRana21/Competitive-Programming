#include <iostream>
#include <string>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,f;
	string k;
	cin>>t;
	while(t--){
	    cin>>n; f=1;
		cin>>k;
		n--;

		while(n>=0 && f){
			if((k[n]-'0')%5==0){
				cout<<"Yes"<<el;
				f=0;
			}
			n--;
		}
		if(f){
			cout<<"No"<<el;
		}
	}
	return 0;
}