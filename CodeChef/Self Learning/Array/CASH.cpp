#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,k,i,sum;
	cin>>t;
	while(t--){
	    cin>>n>>k; i=sum=0;
		int *arr = new int[n];
		while(i<n){
			cin>>arr[i];
			sum+=arr[i];
			i++;
		}
		cout<<sum%k<<el;
	}
	return 0;
}
