#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b,c,d,k,s;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d>>k;
	    s=0;
	    if(a>c){
	        while(a!=c){
	            s++;
	            a--;
	        }
	        if(b<d){
	            while(b!=d){
	                s++;
	                b++;
	            }
	        }
	        else{
	            while(b!=d){
	                s++;
	                b--;
	            }
	        }
	    }
	    else{
	        while(a!=c){
	            s++;
	            a++;
	        }
	        if(b<d){
	            while(b!=d){
	                s++;
	                b++;
	            }
	        }
	        else{
	            while(b!=d){
	                s++;
	                b--;
	            }
	        }
	    }
	    if(s==k || (s<k && (k-s)%2==0)){
	       cout<<"YES"<<el;
	    }
	    else{
	       cout<<"NO"<<el;
	    }
	}
	return 0;
}
