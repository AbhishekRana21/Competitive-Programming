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
	    switch(x%4){
	        case 0:
    	        cout<<"North"<<el;
    	        break;
	        case 1:
    	        cout<<"East"<<el;
    	        break;
	        case 2:
    	        cout<<"South"<<el;
    	        break;
	        case 3:
    	        cout<<"West"<<el;
    	        break;
	        default:
    	        break;
	    }
	}
	return 0;
}