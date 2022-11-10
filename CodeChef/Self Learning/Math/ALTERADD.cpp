#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,a,b,i;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(b-a==1 || (b-a)%3==0 || (b-a)%3==1){
	        cout<<"YES"<<el;
	    }
	    else{
	        cout<<"NO"<<el;
	    }
	}
	return 0;
}