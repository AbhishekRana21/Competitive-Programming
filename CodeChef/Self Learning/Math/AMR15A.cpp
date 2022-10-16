#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,h,a,e=0;
	cin>>n;
	h=n/2;
	while(n--){
	    cin>>a;
	    if(a%2==0){
	        e++;
	    }
	}
	if(e>h){
	    cout<<"READY FOR BATTLE"<<el;
	}
	else{
	    cout<<"NOT READY"<<el;
	}
	return 0;
}