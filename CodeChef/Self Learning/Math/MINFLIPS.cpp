#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,e,pn,nn;
	cin>>t;
	while(t--){
	    cin>>n; i=n; pn=nn=0;
	    while(i--){
	        cin>>e;
	        if(e==1){
	            pn++;
	        }
	        else{
	            nn++;
	        }
	    }
	    if(n%2!=0){
	        cout<<-1<<el;
	        continue;
	    }
	    else{
	        cout<<(max(pn,nn)-min(pn,nn))/2<<el;
	    }
	}
	return 0;
}