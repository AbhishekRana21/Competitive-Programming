#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int l,b,a,p;
	cin>>l>>b;
	a = l*b;
	p = 2*(l+b);
	if(a>p){
	    cout<<"Area\n"<<a;
	}
	else if(a<p){
	    cout<<"Peri\n"<<p;
	}
	else{
	    cout<<"Eq\n"<<a;
	}
}