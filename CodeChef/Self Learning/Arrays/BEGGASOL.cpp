#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,f,s,i;
	cin>>t;
	while(t--){
	    cin>>n; s=f=0;
		int *arr = new int[n];
		while(f<n){
			cin>>arr[f++];
		}
		f=1; i=arr[0];
		while(f<n && i>0){
			i--; s++;
			if(arr[f]>0){
				i+=arr[f];
			}
			f++;
		}
		s+=i;
		cout<<s<<el;
	}
	return 0;
}