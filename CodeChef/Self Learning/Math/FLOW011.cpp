#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	float t,s;
	cin>>t;
	while(t--){
	    cin>>s;
	    if(s<1500){
	        cout<<s+(s*0.1)+(s*0.9)<<el;
	    }
	    else{
	        cout<<s+500+(s*0.98)<<el;
	    }
	}
	return 0;
}