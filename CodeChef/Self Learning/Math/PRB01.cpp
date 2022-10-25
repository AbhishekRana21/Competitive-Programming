#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,i,f;
	cin>>t;
	while(t--){
	    cin>>n; f=0;
	    for(i=1;i<n;i++){
	        if(n%i==0){
	            f+=1;
	        }
	    }
	    if(f==1){
	        cout<<"yes"<<el;
	    }
	    else{
	        cout<<"no"<<el;
	    }
	}
	return 0;
}