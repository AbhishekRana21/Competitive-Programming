#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m,k,t,s,i,ts=0;
	cin>>n>>m>>k;
	while(n--){
		t=k;
		s=0;
	    while(t--){
			cin>>i;
			s+=i;
		}
		cin>>i;
		if(s>=m && i<=10){
			ts+=1;
		}
	}
	cout<<ts;
	return 0;
}
