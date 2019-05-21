#include <bits/stdc++.h>

#define MAX 1001000

using namespace std;

typedef long long int ll;

int t[MAX], c[MAX], cnt[MAX];

int main(){
    int N, T, maior = 0, sz = 0;
    multiset<int> prices;
    scanf("%d%d", &N, &T);
    for(int i = 0; i < N; i++){
    	scanf("%d", &t[i]);
	}
	for(int i = 0; i < N; i++){
    	scanf("%d", &c[i]);
	}
	int i = 0;
	for(int j = 0; j < N; j++){
		if(!cnt[t[j]]) sz++;
		cnt[t[j]]++;
		prices.insert(c[j]);
		while(sz == T){
			maior = max(maior, *(prices.begin()));
			prices.erase(c[i]);
			cnt[t[i]]--;
			if(!cnt[t[i]]) sz--;
			i++;
		}
	}
	cout << maior << endl;
}
