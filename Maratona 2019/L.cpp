#include <bits/stdc++.h>

using namespace std;

#define N 1000100

typedef long long int ll;

ll v[N], sum[N], n, m, t, x[N], aux, space;

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++) v[i] = (ll) rand() << 32 | rand();
    while(m--){
        cin >> t; aux = 0;
        for(int i = 0; i < t; i++){
            cin >> x[i]; x[i]--; 
            aux ^= v[x[i]];
        }
        for(int i = 0; i < t; i++)
            sum[x[i]] ^= (v[x[i]] ^ aux);
    }
    for(int i = 0; i < n; i++){
        if(sum[i]) continue;
        space? printf(" ") : space = 1;
        printf("%d", i+1 );
    }
    printf("%s\n", space? "" : "Todo mundo feliz!" );     
}
