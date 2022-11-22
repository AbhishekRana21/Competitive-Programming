#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int n;
	cin>>n;
	if(n/10 == 0){
	    cout<<"1"<<el;
	}
	else if(n/100 == 0){
	    cout<<"2"<<el;
	}
	else if(n/1000 == 0){
	    cout<<"3"<<el;
	}
	else{
	    cout<<"More than 3 digits"<<el;
	}
	return 0;
}