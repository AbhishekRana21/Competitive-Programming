#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(2*x>5*y){
	        cout<<"Chocolate"<<el;
	    }
	    else if(2*x<5*y){
	        cout<<"Candy"<<el;
	    }
	    else{
	        cout<<"Either"<<el;
	    }
	}
	return 0;
}