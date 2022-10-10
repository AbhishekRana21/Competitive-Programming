#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	float t,a,b,x,y,i,j;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x>>y;
	    i=a; j=b;
	    while(a>0 && b>0){
	        a-=x;
	        b-=y;
	    }
	    if(a<1 && b<1){
	        if((i/x)<(j/y)){
	            cout<<"Chef"<<el;
	        }
	        else if((j/y)<(i/x)){
	            cout<<"Chefina"<<el;
	        }
	        else{
	            cout<<"Both"<<el;
	        }
	    }
	    else if(a<1){
	        cout<<"Chef"<<el;
	    }
	    else{
	        cout<<"Chefina"<<el;
	    }
	}
	return 0;
}