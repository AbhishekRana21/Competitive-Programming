#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,n,d,h;
	cin>>t;
	while(t--){
	    cin>>n; h=0;
	    while(n--){
	        cin>>d;
	        if((d+1)%7!=0 && d%7!=0){
	            h++;
	        }
	    }
	    cout<<h+8<<el;
	}
	return 0;
}