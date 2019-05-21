#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll x, ans = 0;
    cin >> x;
    for(int i = 1; i <= x; i++){
    	ans += (x-i+1) * i - (i-1);
	}
	cout << ans << endl;
}
