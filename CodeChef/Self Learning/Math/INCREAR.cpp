#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y,d0,d1;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x<=y){
	        cout<<y-x<<el;
	    }
	    else{
	        d0 = (x-y)/2;
	        d1 = (x-y+1)/2;
	        if(x%2==y%2){
	            cout<<d0<<el;
	        }
	        else{
	            cout<<d1+1<<el;
	        }
	    }
	}
	return 0;
}