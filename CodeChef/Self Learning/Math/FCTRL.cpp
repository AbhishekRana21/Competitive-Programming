#include <bits/stdc++.h>
using namespace std;
#define el "\n";

long countLZ(long x){
    long lz = 0;
    while(x>0){
        x/=5;
        lz+=x;
    }
    return lz;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    cout<<countLZ(x)<<el;
	}
	return 0;
}