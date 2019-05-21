#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int q1, t1, v1, q2, t2, v2;
	scanf("%d%d%d", &q1, &t1, &v1);
	scanf("%d%d%d", &q2, &t2, &v2);
	
	if(q1*t1 < q2*t2) puts("onibus");
	else if(q1*t1 > q2*t2) puts("metro");
	else puts(v1 < v2? "onibus" :  "metro");
	
}
