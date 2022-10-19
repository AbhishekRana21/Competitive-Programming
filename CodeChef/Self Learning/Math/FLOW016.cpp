#include <iostream>
using namespace std;
#define el "\n";

long gcd(long a, long b){
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}

long lcm(long a,long b){
    
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,a,b,g,l;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    g = gcd(max(a,b),min(a,b));
	    l = (a*b)/g;
	    cout<<g<<" "<<l<<el;
	}
	return 0;
}