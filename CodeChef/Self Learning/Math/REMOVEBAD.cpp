#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,c,g;
	cin>>t;
	while(t--){
	    cin>>n; i=c=g=0;
	    int *arr = new int[n];
	    while(i<n){
	        cin>>arr[i++];
	    }
	    sort(arr,arr+n);
	    i=0;
	    while(i<n-1){
	        if(arr[i]!=arr[i+1]){
	            c=0;
	        }
	        else{
	            c++;
				if(c>g){
					g=c;
				}
	        }
			i++;
	    }
	    cout<<n-g-1<<el;
	}
	return 0;
}