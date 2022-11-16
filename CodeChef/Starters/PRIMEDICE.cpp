#include <bits/stdc++.h>
using namespace std;
#define el "\n";

bool isPrime(int x)
{
    if (x <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
 
    return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(isPrime(a+b)){
	        cout<<"Alice"<<el;
	    }
	    else{
	        cout<<"Bob"<<el;
	    }
	}
	return 0;
}