#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,n,nn,rem,i;
	int an[6]={100,50,10,5,2,1};
	cin>>t;
	while(t--){
	    cin>>n; nn=rem=0;
	    for(i=0;i<6 && n>0;i++){
	        nn=nn+n/an[i];
	        n=n%an[i];
	    }
	    cout<<nn<<el;
	}
	return 0;
}