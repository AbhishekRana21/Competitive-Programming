#include <bits/stdc++.h>
using namespace std;
#define el "\n";

long theGCD(long arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout<<fixed<<setprecision(2);
	long t,i,n,g,c;
	cin>>t;
	while(t--){
	    cin>>n; c = 0;
	    long *arr = new long[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    g = theGCD(arr,n);
	    for(i=0;i<n;i++){
	        if(arr[i]!=g){
	            c+=1;
	        }
	    }
	    cout<<c<<el;
	}
	return 0;
}