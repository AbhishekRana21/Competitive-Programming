#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int x,y;
	cin>>x>>y;
	cout<<x-(y/2)<<el;
	return 0;
}