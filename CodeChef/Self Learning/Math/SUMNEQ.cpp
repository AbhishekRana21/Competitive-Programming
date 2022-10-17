#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,i,j,c=0;
	cin>>n;
	    for(i=1;i<n;i++){
	        for(j=1;j<n;j++){
	            if(i+j==n){
	                c++;
	            }
	        }
	    }
	    cout<<c<<el;
	return 0;
}