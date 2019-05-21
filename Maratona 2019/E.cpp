#include <bits/stdc++.h>

#define F first
#define S second

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;

vector<ii> v(1);
int dp[5005][5005];

int solve(int p, int cap){
	if(!p) return 0;
	int &ans = dp[p][cap];
	if(ans == -1){
		ans = solve(p-1, cap);
		if(cap >= v[p].F) ans = max(ans, solve(p, cap-v[p].F) + v[p].S);
	}
	return ans;
}

int main(){
    int q, op, c, p, r;
    scanf("%d", &q);
    memset(dp, -1, sizeof dp);
    while(q--){
    	scanf("%d", &op);
    	if(op == 1){
    		scanf("%d%d", &c, &p );	
    		v.push_back(ii(c, p));
		}
		else{
			scanf("%d", &r );
			printf("%d\n", solve(v.size()-1, r));
		}
	}
}
