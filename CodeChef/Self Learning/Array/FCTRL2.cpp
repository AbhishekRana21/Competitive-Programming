#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using namespace std;
using namespace boost::multiprecision;

int main() {
	int t,n; cpp_int fact;
	cin>>t;
	while(t--)
	{
	    cin>>n; fact=1;
	    for(int i=n;i>1;i--)
	     fact=fact*i;
	    cout<<fact<<endl; 
	}
	return 0;
}