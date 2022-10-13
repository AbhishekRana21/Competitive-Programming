#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x1,y1,x2,y2;
	cin>>t;
	while(t--){
	    cin>>x1>>y1>>x2>>y2;
	    if((x1+y1)<(x2+y2)){
	        cout<<x1+y1<<el;
	    }
	    else{
	        cout<<x2+y2<<el;
	    }
	}
	return 0;
}