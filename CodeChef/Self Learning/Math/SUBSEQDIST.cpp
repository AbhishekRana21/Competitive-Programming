#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long t,n,i,c,f,s,a;
	cin>>t;
	while(t--){
	    cin>>n; i=c=a=0;
	    long *arr = new long[n];
        long *o = new long[n];
        set<int> S;
	    while(i<n){
	        cin>>arr[i];
            S.insert(arr[i]);
            i++;
	    }
		i=0;
        sort(arr,arr+n);
		while(i<n){
            o[c]=1;
			while(i<n-1 && arr[i]==arr[i+1]){
                o[c]+=1;
                i++;
            }
            c++; i++;
		}
        sort(o,o+S.size());
		s = S.size();
		s--;
		f = o[s];
		while(f>1){
			if(f%2==1){
				f=(f+1)/2;
			}
			else{
				f=f/2;
			}
			a++;
		}
		cout<<a<<el;
	}
	return 0;
}