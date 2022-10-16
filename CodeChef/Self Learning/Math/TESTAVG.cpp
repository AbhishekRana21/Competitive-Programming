#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	float t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if((a+b)/2<35.0f){
	        cout<<"Fail"<<el;
	        continue;
	    }
	    else if((b+c)/2<35.0f){
	        cout<<"Fail"<<el;
	        continue;
	    }
	    if((a+c)/2<35.0f){
	        cout<<"Fail"<<el;
	        continue;
	    }
	    else{
	        cout<<"Pass"<<el;
	    }
	}
	return 0;
}