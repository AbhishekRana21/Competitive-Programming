#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define el "\n";
 
long long int gcd(long long int a, long long int b) {
    return (a%b?gcd(b,a%b):b);
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        ll a = 2, f = 0;
        ll pre[n], suf[n];
        pre[0] = arr[0];
        for(int i = 1; i < n; i++) pre[i] = gcd(pre[i - 1], arr[i]);
        suf[n - 1] = arr[n - 1];
        for(int i = n - 2; i > -1; i--) suf[i] = gcd(suf[i + 1], arr[i]);
        vector<int> op;
        int first = 0;
        if(suf[1] != 1) a--, f++, first++;
        if(pre[n - 2] != 1) a--, f++;
        for(int i = 1; f < 2 && i < n - 1; i++)
            if(gcd(pre[i - 1], suf[i + 1]) != 1){
				op.push_back(i + 1), f++;
			}
        if(f == 2) {
            cout << a << "\n";
            if(a == 1) {
                if(first) cout << op[0] << " " << n << "\n";
                else cout << 1 << " " << op[0] << "\n";
            }
			else if(a == 2) {
                cout << 1 << " " << op[0] << "\n";
                cout << op[1] << " " << n << "\n";
            }
        }
        else cout << "-1\n";
    }
}