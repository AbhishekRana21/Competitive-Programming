#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,f,i,d;
	cin>>t;
	while(t--){
		cin>>f; i=d=0;
		int *arr = new int[f];
		while(i<f){
			cin>>arr[i++];
		}
		i=0;

		while(i<f){
			if(arr[i]==arr[i+1]){
				d++;
			}
			i++;
		}
		cout<<f-d<<el;
	}
	return 0;
}