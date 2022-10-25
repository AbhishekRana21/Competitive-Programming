#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,count;
	cin>>t;
	while(t--){
	    cin>>n; count=0;
	    while(n>0){
	        if(n%10==4){
	            count++;
	        }
	        n/=10;
	    }
	    cout<<count<<el;
	}
	return 0;
}