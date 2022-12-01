#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x%10==0){
	        cout<<0<<el;
	    }
	    else if((x*2)%10==0){
	        cout<<1<<el;
	    }
	    else{
	        cout<<-1<<el;
	    }
	}
	return 0;
}