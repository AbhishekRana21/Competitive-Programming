#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	float t,m,h,bmi;
	cin>>t;
	while(t--){
	    cin>>m>>h;
	    bmi = m/(h*h);
	    if(bmi<=18){
	        cout<<1<<el;
	    }
	    else if(bmi<=24){
	        cout<<2<<el;
	    }
	    else if(bmi<=29){
	        cout<<3<<el;
	    }
	    else{
	        cout<<4<<el;
	    }
	}
	return 0;
}