#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,x,s,i,imdb;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    i = 0;
	    while(n--){
	        cin>>s>>imdb;
	        if(s<=x && imdb>i){
	            i = imdb;
	        }
	    }
	    cout<<i<<el;
	}
	return 0;
}
