#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int n, m, i = 1, aux = 0;
    cin >> n >> m; n--;
    if(m > n/3+(n%3 == 2) && m <= n+1-n/3-(n%3 != 0)) puts("SIM");
	else puts("NAO");
}
