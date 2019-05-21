#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll n, lo = 0, hi = 2e9, mid, ans, total;
    cin >> n; n--;
    while(lo <= hi){
    	mid = (lo+hi)/2;
    	total = mid + mid*(mid+1)/2;
    	if(total > n) hi = mid-1;
    	else ans = mid, lo = mid+1;
	}
	n -= (ans + ans*(ans+1)/2);
    printf("%lld %lld\n", ans + (n > 0), ans*(ans+1)/2 + (n > 0? n-1 : 0) );	
}
