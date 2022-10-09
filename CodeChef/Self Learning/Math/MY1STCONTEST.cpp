#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,a,b;
	cin>>n>>a>>b;
	cout<<n-a<<" "<<n-a-b<<el;
	return 0;
}