#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,k,e,count;
	cin>>t;
	while(t--){
	    cin>>n>>k; count = 0;
	    while(n--){
	        cin>>e;
	        if((e+k)%7==0){
	            count++;
	        }
	    }
	    cout<<count<<el;
	}
	return 0;
}