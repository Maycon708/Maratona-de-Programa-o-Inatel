#include <bits/stdc++.h>

#define MAX 1001000

using namespace std;

typedef long long int ll;

int t[MAX], c[MAX];

int main(){
    int N, T, maior = 0;
    scanf("%d%d", &N, &T);
    for(int i = 0; i < N; i++){
    	scanf("%d", &t[i]);
	}
	for(int i = 0; i < N; i++){
    	scanf("%d", &c[i]);
    	maior = max(maior, c[i]);
	}
	cout << maior << endl;
}
