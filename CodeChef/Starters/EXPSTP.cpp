#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	int t,n,x1,y1,x2,y2,id,ox,oy,ix,iy,f1,f2,f3;
	cin>>t;
	while(t--){
	    cin>>n>>x1>>y1>>x2>>y2;
	    id = (max(x1,x2)-min(x1,x2))+(max(y1,y2)-min(y1,y2));
	    ox = min(y1,(n+1)-y1);
	    oy = min(x1,(n+1)-x1);
	    ix = min(y2,(n+1)-y2);
	    iy = min(x2,(n+1)-x2);
	    f1 = min(ox+ix,ox+iy);
	    f2 = min(oy+ix,oy+iy);
	    f3 = min(f1,f2);
	    cout<<min(f3,id)<<el;
	}
	return 0;
}