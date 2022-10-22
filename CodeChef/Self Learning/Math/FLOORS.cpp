#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,y,f1,f2;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x%10==0){
	        f1=x/10;
	    }
	    else{
	        f1=x/10+1;
	    }
	    if(y%10==0){
	        f2=y/10;
	    }
	    else{
	        f2=y/10+1;
	    }
	    cout<<max(f1,f2)-min(f1,f2)<<el;
	}
	return 0;
}