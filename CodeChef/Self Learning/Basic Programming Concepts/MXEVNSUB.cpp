#include <iostream>
using namespace std;
#define el "\n";

int sums(int n){
    int s = 0;
    while(n){
        s+=n;
        n--;
    }
    return s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(sums(n)%2==0){
	            cout<<n<<el;
	    }
	    else{
	        cout<<n-1<<el;
	    }
	}
	return 0;
}
