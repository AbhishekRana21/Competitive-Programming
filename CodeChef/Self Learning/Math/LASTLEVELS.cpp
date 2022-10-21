#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y,z,ll,l,time;
	cin>>t;
	while(t--){
	    l=time=0;
	    cin>>x>>y>>z;
	    ll=x;
	    while(x--){
	        time+=y;
	        l++;
	        if(l%3==0 && l!=ll){
	            time+=z;
	        }
	    }
	    cout<<time<<el;
	}
	return 0;
}