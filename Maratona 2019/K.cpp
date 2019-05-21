#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int n, x, pos = 0, neg = 0;
    cin >> n;
    while(n--){
		cin >> x;
		if(x > 0) pos += x;
		else neg += x;
	}
	cout << pos - neg << endl;
}
