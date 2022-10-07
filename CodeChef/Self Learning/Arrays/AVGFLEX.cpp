#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,j,c,b;
	cin>>t;
	while(t--){
	    cin>>n; i=j=b=0;
		int *arr = new int[n];
		while(i<n){
			cin>>arr[i++];
		}
		for(i=0;i<n;i++){
			c=0;
			for(j=0;j<n;j++){
				if(arr[i]>=arr[j]){
					c++;
				}
			}
			if(c>(n-c)){
				b++;
			}
		}
		cout<<b<<el;
	}
	return 0;
}