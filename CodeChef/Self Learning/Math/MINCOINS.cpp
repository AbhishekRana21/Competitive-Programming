#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,x,c,y;
	cin>>t;
	while(t--){
	    cin>>x; c=0;
	    if(x>9){
	        c = x/10;
	        x = x%10;
	    }
	    y = x/5;
	    c += y;
	    x = x%5;
	    if(!x){
	        cout<<c<<el;
	    }
	    else{
	        cout<<-1<<el;
	    }
	}
	return 0;
}