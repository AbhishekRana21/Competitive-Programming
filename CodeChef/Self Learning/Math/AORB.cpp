#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,a,b,tp1,tp2;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    tp1=(500-(a*2))+(1000-((a+b)*4));
	    tp2=(1000-(b*4))+(500-((a+b)*2));
	    if(tp1>tp2){
	        cout<<tp1<<el;
	    }
	    else{
	        cout<<tp2<<el;
	    }
	}
	return 0;
}