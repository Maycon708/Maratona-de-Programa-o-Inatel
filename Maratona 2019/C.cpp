#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int n, x, lt = -1;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> x;
    	if(x == lt){
    		printf("im");
    		break;
		}
    	lt = x;
	}
	puts("perfeita");
}
