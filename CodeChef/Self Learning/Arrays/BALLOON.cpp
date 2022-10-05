#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,i,c;
	cin>>t;
	while(t--){
	    cin>>n; i=c=0;
        int *arr = new int[n];
        while(i<n){
            cin>>arr[i++];
        }
        i=0;
        while(i<n && c!=7){
            if(arr[i]>=1 && arr[i]<=7){
                c+=1;
            }
            i++;
        }
        cout<<i<<el;
	}
	return 0;
}