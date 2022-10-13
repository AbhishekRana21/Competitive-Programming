#include<iostream>
using namespace std;
#define el "\n";

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<a%b<<el;
    }
    return 0;
}