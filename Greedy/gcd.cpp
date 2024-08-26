#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int tc;
	//scanf("%d", &tc);
	
	while(tc--){
		long long p, q, b;
	//	scanf("%lld%lld%lld", &p, &q, &b);
		long long g = __gcd(p, q);
		q/=g;
		
		b=__gcd(q, b);
		while(b!=1){
			while(q%b == 0){
				q/=b;
			}
			b = __gcd(q, b);
		}
		
		if(q == 1) cout << "Finite\n";
		else cout << "Infinite\n";
	}
	
	return 0;
}