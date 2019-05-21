#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int cnt[30], total;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
	for(int i = 0; i < n; i++){
    	if(cnt[s[i]-'a']) total++;
    	cnt[s[i]-'a']++;
	}
	printf("%d\n", (n>26)? -1:total );
}
