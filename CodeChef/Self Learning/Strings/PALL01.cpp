#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,i; string s,r;
	cin>>t;
	while(t--){
		cin>>s; r="";
		for(i=s.length()-1;i>=0;i--){
			r+=s[i];
		}
		if(r==s){
			cout<<"wins"<<el;
		}
		else{
			cout<<"loses"<<el;
		}
	}
	return 0;
}