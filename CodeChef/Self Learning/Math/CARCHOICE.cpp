#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	float t,x1,x2,y1,y2;
	cin>>t;
	while(t--){
	    cin>>x1>>x2>>y1>>y2;
	    if(x1/y1>x2/y2){
	        cout<<-1<<el;
	    }
	    else if(x1/y1<x2/y2){
	        cout<<1<<el;
	    }
	    else{
	        cout<<0<<el;
	    }
	}
	return 0;
}